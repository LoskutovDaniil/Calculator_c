#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "../s21_my_calc.h"
#include "credit_calc.h"
#include "deposit_calc.h"
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString styleSheet = "QLineEdit {"
                             "  qproperty-alignment: 'AlignVCenter | AlignRight';"
                             "  border-bottom: 1px solid gray;"
                             "  background-color: white;"
                             "  color: black;"
                             "}";
        ui->result->setStyleSheet(styleSheet);

        connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_mul,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_mod,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_pow,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_sqrt,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        connect(ui->pushButton_open_parenth,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_close_parenth,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        connect(ui->pushButton_ln,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_tan,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_atan,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_log,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_sin,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_cos,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_acos,SIGNAL(clicked()),this,SLOT(digit_numbers()));
        connect(ui->pushButton_asin,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        connect(ui->pushButton_point,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        connect(ui->pushButton_x,SIGNAL(clicked()),this,SLOT(digit_numbers()));

        this->x = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_numbers()
{
    QPushButton *button = static_cast<QPushButton*>(sender()); // Получение указателя на кнопку, которая вызвала событие. sender() возвращает указатель на объект, который отправил сигнал.

    QString new_label = (ui->result->text() + button->text());

    if (button->text() == "ln") new_label = new_label + '(';
    if (button->text() == "tan") new_label = new_label + '(';
    if (button->text() == "atan") new_label = new_label + '(';
    if (button->text() == "log") new_label = new_label + '(';
    if (button->text() == "sin") new_label = new_label + '(';
    if (button->text() == "cos") new_label = new_label + '(';
    if (button->text() == "acos") new_label = new_label + '(';
    if (button->text() == "asin") new_label = new_label + '(';

    ui->result->setText(new_label);
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->pushButton_clear->setCheckable(false);

    ui->result->setText("");
}

void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

void MainWindow::on_pushButton_eq_clicked()
{
    double result = 0;

    std::string text = ui->result->text().toLower().toStdString();
    char tmp[256] = "";

    if(s21_validator(text.data(), tmp))
    {
        stack *head = NULL;
        if(s21_stack_logic(&head, tmp, &this->x, &result))
        {
            ui->result->setText(QString::number(result, 'g', 10));
        } else {
            ui->result->setText("The string is not valid");
        }
    } else {
            ui->result->setText("The string is not valid");
    }
}

void MainWindow::on_pushButton_x_clicked()
{
    QString text = QInputDialog::getText(this, "", "Введите значение переменной Х");
    text.replace(",", ".");
    this->x = text.toDouble();
    qInfo() << "x -- input" << x;
}


void MainWindow::on_pushButton_print_graph_clicked()
{
    ui->widget_graph->clearGraphs();  //Если нужно, то очищаем все графики

      double step = 0.1;
      QVector<double> x, y;  //Массивы координат точек
      QByteArray bit_string = ui->result->text().toLocal8Bit(); // текст на экране перевели в QByteArray bit_string
      char *tmp = bit_string.data();                            // QByteArray bit_string переводим в char *tmp

      double x_min = ui->doubleSpinBox_set_min_x->value();
      double x_max = ui->doubleSpinBox_set_max_x->value();

      double y_min = ui->doubleSpinBox_set_min_y->value();
      double y_max = ui->doubleSpinBox_set_max_y->value();

      double res;
      //Пробегаем по всем точкам
      for (double X = x_min; X <= x_max; X += step) {
        x.push_back(X);
        stack *head = NULL;
        s21_stack_logic(&head, tmp, &X, &res);
        y.push_back(res);

      //Добавляем один график в widget
      ui->widget_graph->addGraph();

      //Говорим, что отрисовать нужно график по нашим двум массивам x и y
      ui->widget_graph->graph(0)->setData(x, y);

      //Установим область, которая будет показываться на графике
      ui->widget_graph->xAxis->setRange(x_min, x_max);  //Для оси Ox
      ui->widget_graph->yAxis->setRange(y_min, y_max);  //Для оси Oy

      ui->widget_graph->graph(0)->setPen(QColor(50, 50, 50, 255));  //задаем цвет точки
      // ui->widget_1->graph(0)->setLineStyle(QCPGraph::lsNone);//убираем линии

      QPen graphPen = ui->widget_graph->graph(0)->pen();
      graphPen.setWidth(2);
      ui->widget_graph->graph(0)->setPen(graphPen);

      //формируем вид точек
      ui->widget_graph->graph(0)->setScatterStyle(
          QCPScatterStyle(QCPScatterStyle::ssCircle, 4));

      //Подписываем оси Ox и Oy
      ui->widget_graph->xAxis->setLabel("x");
      ui->widget_graph->yAxis->setLabel("y");

      // создание зума для гарфика
      ui->widget_graph->setInteraction(QCP::iRangeZoom, true);

      //И перерисуем график на нашем widget
      ui->widget_graph->replot();
      }
}


void MainWindow::on_pushButton_credit_calc_clicked()
{
    Credit_calc wind;
    wind.setModal(true);
    wind.exec();
}


void MainWindow::on_pushButton_dep_calc_clicked()
{
      Deposit_calc wind;
      wind.setModal(true);
      wind.exec();
}

