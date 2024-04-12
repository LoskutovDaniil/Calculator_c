#include "deposit_calc.h"
#include "ui_deposit_calc.h"

Deposit_calc::Deposit_calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deposit_calc)
{
    ui->setupUi(this);

    ui->tableWidget_depo->setColumnWidth(0, 113);
    ui->tableWidget_depo->setColumnWidth(1, 140);
    ui->tableWidget_depo->setColumnWidth(2, 140);
}

Deposit_calc::~Deposit_calc()
{
    delete ui;
}

void Deposit_calc::on_pushButton_calc_dep_clicked() {
  int is_error = 0;
  ui->label_error_dep->clear();

  // собираем данные в структуру бэкэнда
  deposit *dep = (deposit *)calloc(1, sizeof(deposit));
  dep->deposit_sum = ui->doubleSpinBox_dep_sum->value();
  dep->placement_period = ui->spinBox_dep_months->value();
  dep->percent = ui->doubleSpinBox_dep_percent->value();
  dep->tax_rate = ui->doubleSpinBox_dep_tax_rate->value();
  dep->capitalization_of_percents = ui->checkBox_capitalization->isChecked();

  int selectedIndex = ui->comboBox_periodicity->currentIndex();
  if (selectedIndex == 0)
    dep->frequency_of_payments = 1;
  else if (selectedIndex == 1)
    dep->frequency_of_payments = 3;
  else if (selectedIndex == 2)
    dep->frequency_of_payments = 6;
  else if (selectedIndex == 3)
    dep->frequency_of_payments = 12;

  // собираем информацию о каждом месяце в структуру бэкэнда
  month_operations *months = (month_operations *)calloc(dep->placement_period, sizeof(month_operations));
  int rows = ui->tableWidget_depo->rowCount();

  for (int i = 0; i < rows && !is_error; i++) {
    QSpinBox *spinBox = (QSpinBox *)(ui->tableWidget_depo->cellWidget(i, 0));
    int number_of_month = spinBox->value();
    if (number_of_month >= dep->placement_period) {
      is_error = 1;
    } else {
      QDoubleSpinBox *item_plus =
          (QDoubleSpinBox *)(ui->tableWidget_depo->cellWidget(i, 1));
      QDoubleSpinBox *item_minus =
          (QDoubleSpinBox *)(ui->tableWidget_depo->cellWidget(i, 2));
      months[number_of_month - 1].plus_value = item_plus->value();
      months[number_of_month - 1].minus_value = item_minus->value();
    }
  }

  // передаем данные для расчетов в бек
  if (!is_error && s21_calc_deposit(dep, months)) {
    // добавляем результат расчетов в поля
    ui->label_sum_output->setText(
        QLocale::system().toString(dep->result_sum, 'f', 2));
    ui->label_percent_charges->setText(
        QLocale::system().toString(dep->accrued_percents, 'f', 2));
    ui->label_tax_sum->setText(
        QLocale::system().toString(dep->tax_amount, 'f', 2));
  } else {
    ui->label_error_dep->setText("Некорректные данные");
  }

  free(dep);
  free(months);
}

void Deposit_calc::on_pushButton_add_clicked() {
  int row = ui->tableWidget_depo->rowCount();
  ui->tableWidget_depo->insertRow(row);

  QSpinBox *spinBox = new QSpinBox();
  spinBox->setMaximum(ui->spinBox_dep_months->value() - 1);
  spinBox->setMinimum(1);
  ui->tableWidget_depo->setCellWidget(row, 0, spinBox);

  for (int col = 1; col <= 2; col++) {
    QDoubleSpinBox *doubleSpinBox = new QDoubleSpinBox();
    doubleSpinBox->setDecimals(2);
    doubleSpinBox->setSingleStep(10);
    doubleSpinBox->setMinimum(0);
    doubleSpinBox->setMaximum(100000000);
    doubleSpinBox->setGroupSeparatorShown(true);
    ui->tableWidget_depo->setCellWidget(row, col, doubleSpinBox);
  }
}

void Deposit_calc::on_pushButton_clear_dep_clicked() {
  // добавляем результат расчетов в поля
  ui->label_sum_output->setText("0.00");
  ui->label_percent_charges->setText("0.00");
  ui->label_tax_sum->setText("0.00");
  ui->label_error_dep->clear();
  ui->tableWidget_depo->clearContents();

  int numRows = ui->tableWidget_depo->rowCount();
  for (int row = numRows - 1; row >= 0; row--) {
    ui->tableWidget_depo->removeRow(row);
  }
}

void Deposit_calc::on_pushButton_close_dep_clicked() { close(); }

