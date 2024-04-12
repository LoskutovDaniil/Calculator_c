#include <QTableWidget>
#include <QStandardItemModel>

#include "credit_calc.h"
#include "ui_credit_calc.h"
#include "../s21_my_calc.h"

Credit_calc::Credit_calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credit_calc)
{
    ui->setupUi(this);
}

Credit_calc::~Credit_calc()
{
    delete ui;
}

void Credit_calc::on_pushButton_calc_res_clicked() {
  double credit_summ = ui->doubleSpinBox_sum->value();
  int number_of_months = ui->spinBox_months->value();
  double percent = ui->doubleSpinBox_percent->value();
  int credit_type = 0;
  if (ui->radioButton_var_an->isChecked()) {
    credit_type = 1;
  } else if (ui->radioButton_var_dif->isChecked()) {
    credit_type = 2;
  }

  double monthly_payment = 0;
  double overpayment_amount = 0;
  double total_payout = 0;
  double monthly_payments[number_of_months];

  s21_calc_credit(credit_summ, number_of_months, percent, credit_type,
                  &monthly_payment, &overpayment_amount, &total_payout,
                  monthly_payments);

  ui->label_overpay->setText(
      QLocale::system().toString(overpayment_amount, 'f', 2));
  ui->label_total_pay->setText(QLocale::system().toString(total_payout, 'f', 2));

  // если аннуитетный
  if (credit_type == 1) {
    ui->label_month_pay->setText(
        QLocale::system().toString(monthly_payment, 'f', 2));
  } else if (credit_type == 2) {
    // если дифференцированный
    ui->label_month_pay->setText(
        QLocale::system().toString(monthly_payments[0], 'f', 2) + " ... " +
        QLocale::system().toString(monthly_payments[number_of_months - 1], 'f',
                                   2));

    // создаем диалоговое окно и принтуем туда таблицу с платежами
    QDialog *dialog = new QDialog(this);
    QStandardItemModel *creditModel = new QStandardItemModel(dialog);
    QTableView *creditTable = new QTableView(dialog);
    creditTable->setModel(creditModel);

    // Добавляем столбцы (заголовки) к модели, если это необходимо
    creditModel->setHorizontalHeaderItem(
        0, new QStandardItem("Платежи по месяцам"));

    for (int i = number_of_months - 1; i >= 0; i--) {
      QList<QStandardItem *> rowItems;
      rowItems.append(new QStandardItem(
          QLocale::system().toString(monthly_payments[i], 'f', 2)));
      creditModel->appendRow(rowItems);
    }

    // задаем размеры: колонке, окну, таблице
    creditTable->setColumnWidth(0, 200);
    dialog->setFixedSize(250, 210 + number_of_months * 20);
    creditTable->setFixedSize(240, 200 + number_of_months * 20);
    dialog->show();
  }
}

void Credit_calc::on_pushButton_clear_window_clicked() {
  ui->doubleSpinBox_sum->setValue(1000.0);
  ui->spinBox_months->setValue(12);
  ui->doubleSpinBox_percent->setValue(8.5);
  ui->radioButton_var_an->click();

  ui->label_total_pay->setText("0.00");
  ui->label_overpay->setText("0.00");
  ui->label_month_pay->setText("0.00");
}

void Credit_calc::on_pushButton_close_credit_window_clicked() { close(); }
