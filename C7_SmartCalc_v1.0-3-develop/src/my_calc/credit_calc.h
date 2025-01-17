#ifndef CREDIT_CALC_H
#define CREDIT_CALC_H

#include <QDialog>

#ifdef __cplusplus

extern "C" {
#endif

#include "../s21_my_calc.h"

#ifdef __cplusplus
}
#endif

namespace Ui {
class Credit_calc;
}

class Credit_calc : public QDialog
{
    Q_OBJECT

public:
    explicit Credit_calc(QWidget *parent = nullptr);
    ~Credit_calc();

private slots:
    void on_pushButton_calc_res_clicked();
    void on_pushButton_clear_window_clicked();

    void on_pushButton_close_credit_window_clicked();

private:
    Ui::Credit_calc *ui;
};

#endif // CREDIT_CALC_H
