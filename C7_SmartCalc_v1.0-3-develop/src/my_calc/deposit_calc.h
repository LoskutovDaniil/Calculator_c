#ifndef DEPOSIT_CALC_H
#define DEPOSIT_CALC_H

#include <QDialog>
#include <QGridLayout>
#include <QStandardItemModel>
#include <QTableWidget>

#ifdef __cplusplus

extern "C" {
#endif

#include "../s21_my_calc.h"

#ifdef __cplusplus
}
#endif

namespace Ui {
class Deposit_calc;
}

class Deposit_calc : public QDialog
{
    Q_OBJECT

public:
    explicit Deposit_calc(QWidget *parent = nullptr);
    ~Deposit_calc();

private slots:
    void on_pushButton_calc_dep_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_clear_dep_clicked();

    void on_pushButton_close_dep_clicked();

private:
    Ui::Deposit_calc *ui;
};

#endif // DEPOSIT_CALC_H
