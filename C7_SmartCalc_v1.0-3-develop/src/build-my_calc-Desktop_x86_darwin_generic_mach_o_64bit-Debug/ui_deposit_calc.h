/********************************************************************************
** Form generated from reading UI file 'deposit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_CALC_H
#define UI_DEPOSIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit_calc
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_dep_sum;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_dep_months;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_dep_percent;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_dep_tax_rate;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_periodicity;
    QCheckBox *checkBox_capitalization;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QPushButton *pushButton_add;
    QTableWidget *tableWidget_depo;
    QFrame *line;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLabel *label_sum_output;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_percent_charges;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_tax_sum;
    QLabel *label_error_dep;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_clear_dep;
    QPushButton *pushButton_calc_dep;
    QPushButton *pushButton_close_dep;

    void setupUi(QDialog *Deposit_calc)
    {
        if (Deposit_calc->objectName().isEmpty())
            Deposit_calc->setObjectName(QString::fromUtf8("Deposit_calc"));
        Deposit_calc->resize(1075, 573);
        verticalLayoutWidget = new QWidget(Deposit_calc);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 441, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox_dep_sum = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_dep_sum->setObjectName(QString::fromUtf8("doubleSpinBox_dep_sum"));
        doubleSpinBox_dep_sum->setMinimum(1000.000000000000000);
        doubleSpinBox_dep_sum->setMaximum(100000000.000000000000000);
        doubleSpinBox_dep_sum->setSingleStep(1.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_dep_sum);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBox_dep_months = new QSpinBox(verticalLayoutWidget);
        spinBox_dep_months->setObjectName(QString::fromUtf8("spinBox_dep_months"));
        spinBox_dep_months->setMinimumSize(QSize(24, 24));
        spinBox_dep_months->setProperty("showGroupSeparator", QVariant(true));
        spinBox_dep_months->setMinimum(1);
        spinBox_dep_months->setMaximum(360);

        horizontalLayout_3->addWidget(spinBox_dep_months);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBox_dep_percent = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_dep_percent->setObjectName(QString::fromUtf8("doubleSpinBox_dep_percent"));
        doubleSpinBox_dep_percent->setMinimumSize(QSize(0, 24));
        doubleSpinBox_dep_percent->setProperty("showGroupSeparator", QVariant(true));
        doubleSpinBox_dep_percent->setValue(0.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_dep_percent);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        doubleSpinBox_dep_tax_rate = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_dep_tax_rate->setObjectName(QString::fromUtf8("doubleSpinBox_dep_tax_rate"));
        doubleSpinBox_dep_tax_rate->setMinimumSize(QSize(0, 24));
        doubleSpinBox_dep_tax_rate->setProperty("showGroupSeparator", QVariant(true));
        doubleSpinBox_dep_tax_rate->setMaximum(100.000000000000000);
        doubleSpinBox_dep_tax_rate->setValue(0.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_dep_tax_rate);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_periodicity = new QComboBox(verticalLayoutWidget);
        comboBox_periodicity->addItem(QString());
        comboBox_periodicity->addItem(QString());
        comboBox_periodicity->addItem(QString());
        comboBox_periodicity->addItem(QString());
        comboBox_periodicity->setObjectName(QString::fromUtf8("comboBox_periodicity"));

        horizontalLayout_2->addWidget(comboBox_periodicity);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBox_capitalization = new QCheckBox(verticalLayoutWidget);
        checkBox_capitalization->setObjectName(QString::fromUtf8("checkBox_capitalization"));

        verticalLayout->addWidget(checkBox_capitalization);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        pushButton_add = new QPushButton(verticalLayoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setEnabled(true);

        horizontalLayout_7->addWidget(pushButton_add);


        verticalLayout->addLayout(horizontalLayout_7);

        tableWidget_depo = new QTableWidget(verticalLayoutWidget);
        if (tableWidget_depo->columnCount() < 3)
            tableWidget_depo->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_depo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_depo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_depo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_depo->setObjectName(QString::fromUtf8("tableWidget_depo"));

        verticalLayout->addWidget(tableWidget_depo);

        line = new QFrame(Deposit_calc);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 40, 21, 461));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_5 = new QWidget(Deposit_calc);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(540, 130, 481, 401));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_11 = new QLabel(verticalLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_sum_output = new QLabel(verticalLayoutWidget_5);
        label_sum_output->setObjectName(QString::fromUtf8("label_sum_output"));

        verticalLayout_4->addWidget(label_sum_output);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(verticalLayoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_percent_charges = new QLabel(verticalLayoutWidget_5);
        label_percent_charges->setObjectName(QString::fromUtf8("label_percent_charges"));

        verticalLayout_3->addWidget(label_percent_charges);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_tax_sum = new QLabel(verticalLayoutWidget_5);
        label_tax_sum->setObjectName(QString::fromUtf8("label_tax_sum"));

        verticalLayout_2->addWidget(label_tax_sum);


        verticalLayout_5->addLayout(verticalLayout_2);

        label_error_dep = new QLabel(verticalLayoutWidget_5);
        label_error_dep->setObjectName(QString::fromUtf8("label_error_dep"));
        label_error_dep->setStyleSheet(QString::fromUtf8("color: rgb(200,66,71);"));

        verticalLayout_5->addWidget(label_error_dep);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_clear_dep = new QPushButton(verticalLayoutWidget_5);
        pushButton_clear_dep->setObjectName(QString::fromUtf8("pushButton_clear_dep"));

        horizontalLayout_8->addWidget(pushButton_clear_dep);

        pushButton_calc_dep = new QPushButton(verticalLayoutWidget_5);
        pushButton_calc_dep->setObjectName(QString::fromUtf8("pushButton_calc_dep"));

        horizontalLayout_8->addWidget(pushButton_calc_dep);

        pushButton_close_dep = new QPushButton(verticalLayoutWidget_5);
        pushButton_close_dep->setObjectName(QString::fromUtf8("pushButton_close_dep"));

        horizontalLayout_8->addWidget(pushButton_close_dep);


        verticalLayout_5->addLayout(horizontalLayout_8);


        retranslateUi(Deposit_calc);

        QMetaObject::connectSlotsByName(Deposit_calc);
    } // setupUi

    void retranslateUi(QDialog *Deposit_calc)
    {
        Deposit_calc->setWindowTitle(QCoreApplication::translate("Deposit_calc", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\200\320\276\320\272 (\320\262 \320\274\320\265\321\201.)", nullptr));
        label->setText(QCoreApplication::translate("Deposit_calc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 (%)", nullptr));
        label_5->setText(QCoreApplication::translate("Deposit_calc", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 (%)", nullptr));
        label_2->setText(QCoreApplication::translate("Deposit_calc", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202 (\320\262 \320\274\320\265\321\201.)", nullptr));
        comboBox_periodicity->setItemText(0, QCoreApplication::translate("Deposit_calc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        comboBox_periodicity->setItemText(1, QCoreApplication::translate("Deposit_calc", "\320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox_periodicity->setItemText(2, QCoreApplication::translate("Deposit_calc", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_periodicity->setItemText(3, QCoreApplication::translate("Deposit_calc", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));

        checkBox_capitalization->setText(QCoreApplication::translate("Deposit_calc", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("Deposit_calc", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 / \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Deposit_calc", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 +", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_depo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Deposit_calc", "\320\235\320\276\320\274\320\265\321\200 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_depo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_depo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_sum_output->setText(QCoreApplication::translate("Deposit_calc", "0.00", nullptr));
        label_9->setText(QCoreApplication::translate("Deposit_calc", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_percent_charges->setText(QCoreApplication::translate("Deposit_calc", "0.00", nullptr));
        label_7->setText(QCoreApplication::translate("Deposit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_tax_sum->setText(QCoreApplication::translate("Deposit_calc", "0.00", nullptr));
        label_error_dep->setText(QString());
        pushButton_clear_dep->setText(QCoreApplication::translate("Deposit_calc", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_calc_dep->setText(QCoreApplication::translate("Deposit_calc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_close_dep->setText(QCoreApplication::translate("Deposit_calc", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit_calc: public Ui_Deposit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_CALC_H
