/********************************************************************************
** Form generated from reading UI file 'credit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_CALC_H
#define UI_CREDIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit_calc
{
public:
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_sum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_months;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_percent;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_var_an;
    QRadioButton *radioButton_var_dif;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_month_pay;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *label_overpay;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *label_total_pay;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_calc_res;
    QPushButton *pushButton_clear_window;
    QPushButton *pushButton_close_credit_window;

    void setupUi(QDialog *Credit_calc)
    {
        if (Credit_calc->objectName().isEmpty())
            Credit_calc->setObjectName(QString::fromUtf8("Credit_calc"));
        Credit_calc->resize(980, 400);
        horizontalLayoutWidget_9 = new QWidget(Credit_calc);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(50, 100, 861, 231));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(horizontalLayoutWidget_9);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBox_sum = new QDoubleSpinBox(horizontalLayoutWidget_9);
        doubleSpinBox_sum->setObjectName(QString::fromUtf8("doubleSpinBox_sum"));
        doubleSpinBox_sum->setMinimumSize(QSize(100, 30));
        doubleSpinBox_sum->setMaximumSize(QSize(100, 30));
        doubleSpinBox_sum->setDecimals(2);
        doubleSpinBox_sum->setMaximum(10000000.000000000000000);
        doubleSpinBox_sum->setSingleStep(100000.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_sum);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_months = new QSpinBox(horizontalLayoutWidget_9);
        spinBox_months->setObjectName(QString::fromUtf8("spinBox_months"));
        spinBox_months->setMinimumSize(QSize(100, 30));
        spinBox_months->setMaximumSize(QSize(100, 30));
        spinBox_months->setMinimum(6);
        spinBox_months->setMaximum(400);

        horizontalLayout_2->addWidget(spinBox_months);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(horizontalLayoutWidget_9);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_percent = new QDoubleSpinBox(horizontalLayoutWidget_9);
        doubleSpinBox_percent->setObjectName(QString::fromUtf8("doubleSpinBox_percent"));
        doubleSpinBox_percent->setMinimumSize(QSize(100, 30));
        doubleSpinBox_percent->setMaximumSize(QSize(100, 30));

        horizontalLayout_3->addWidget(doubleSpinBox_percent);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_var_an = new QRadioButton(horizontalLayoutWidget_9);
        radioButton_var_an->setObjectName(QString::fromUtf8("radioButton_var_an"));

        verticalLayout->addWidget(radioButton_var_an);

        radioButton_var_dif = new QRadioButton(horizontalLayoutWidget_9);
        radioButton_var_dif->setObjectName(QString::fromUtf8("radioButton_var_dif"));

        verticalLayout->addWidget(radioButton_var_dif);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(horizontalLayoutWidget_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_month_pay = new QLabel(horizontalLayoutWidget_9);
        label_month_pay->setObjectName(QString::fromUtf8("label_month_pay"));

        horizontalLayout_4->addWidget(label_month_pay);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(horizontalLayoutWidget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        label_overpay = new QLabel(horizontalLayoutWidget_9);
        label_overpay->setObjectName(QString::fromUtf8("label_overpay"));

        horizontalLayout_6->addWidget(label_overpay);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(horizontalLayoutWidget_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        label_total_pay = new QLabel(horizontalLayoutWidget_9);
        label_total_pay->setObjectName(QString::fromUtf8("label_total_pay"));

        horizontalLayout_7->addWidget(label_total_pay);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_calc_res = new QPushButton(horizontalLayoutWidget_9);
        pushButton_calc_res->setObjectName(QString::fromUtf8("pushButton_calc_res"));

        horizontalLayout_8->addWidget(pushButton_calc_res);

        pushButton_clear_window = new QPushButton(horizontalLayoutWidget_9);
        pushButton_clear_window->setObjectName(QString::fromUtf8("pushButton_clear_window"));

        horizontalLayout_8->addWidget(pushButton_clear_window);

        pushButton_close_credit_window = new QPushButton(horizontalLayoutWidget_9);
        pushButton_close_credit_window->setObjectName(QString::fromUtf8("pushButton_close_credit_window"));

        horizontalLayout_8->addWidget(pushButton_close_credit_window);


        verticalLayout_3->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_3);


        retranslateUi(Credit_calc);

        QMetaObject::connectSlotsByName(Credit_calc);
    } // setupUi

    void retranslateUi(QDialog *Credit_calc)
    {
        Credit_calc->setWindowTitle(QCoreApplication::translate("Credit_calc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Credit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Credit_calc", "\320\241\321\200\320\276\320\272 \320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205", nullptr));
        label_3->setText(QCoreApplication::translate("Credit_calc", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        radioButton_var_an->setText(QCoreApplication::translate("Credit_calc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        radioButton_var_dif->setText(QCoreApplication::translate("Credit_calc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("Credit_calc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_month_pay->setText(QString());
        label_6->setText(QCoreApplication::translate("Credit_calc", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_overpay->setText(QString());
        label_8->setText(QCoreApplication::translate("Credit_calc", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_total_pay->setText(QString());
        pushButton_calc_res->setText(QCoreApplication::translate("Credit_calc", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_clear_window->setText(QCoreApplication::translate("Credit_calc", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_close_credit_window->setText(QCoreApplication::translate("Credit_calc", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit_calc: public Ui_Credit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_CALC_H
