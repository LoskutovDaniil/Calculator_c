#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

#ifdef __cplusplus

extern "C" {
#endif

#include "../s21_my_calc.h"

#ifdef __cplusplus
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    double x;
    double min_x;
    double max_x;
    double min_y;
    double max_y;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_numbers();
    void on_pushButton_clear_clicked();
    void on_pushButton_exit_clicked();
    void on_pushButton_eq_clicked();
    void on_pushButton_x_clicked();
    void on_pushButton_print_graph_clicked();
    void on_pushButton_credit_calc_clicked();
    void on_pushButton_dep_calc_clicked();
};
#endif // MAINWINDOW_H
