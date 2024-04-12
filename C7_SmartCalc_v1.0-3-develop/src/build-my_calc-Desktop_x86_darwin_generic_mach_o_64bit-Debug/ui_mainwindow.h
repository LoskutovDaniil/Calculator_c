/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_point;
    QPushButton *pushButton_open_parenth;
    QPushButton *pushButton_7;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_6;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_4;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_log;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_div;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_0;
    QPushButton *pushButton_close_parenth;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_x;
    QPushButton *pushButton_2;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_3;
    QPushButton *pushButton_exit;
    QLineEdit *result;
    QCustomPlot *widget_graph;
    QPushButton *pushButton_credit_calc;
    QPushButton *pushButton_dep_calc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_set_min_x;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_set_min_y;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_print_graph;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_set_max_x;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_set_max_y;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1012, 398);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(198, 128, 81, 40));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(335, 165, 50, 50));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(335, 122, 50, 50));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(198, 212, 81, 40));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(335, 251, 50, 49));
        pushButton_open_parenth = new QPushButton(centralwidget);
        pushButton_open_parenth->setObjectName(QString::fromUtf8("pushButton_open_parenth"));
        pushButton_open_parenth->setGeometry(QRect(281, 84, 70, 41));
        pushButton_open_parenth->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(282, 122, 50, 50));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(30, 254, 81, 41));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(388, 165, 50, 50));
        pushButton_eq = new QPushButton(centralwidget);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(387, 255, 104, 40));
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(282, 165, 50, 50));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(198, 170, 81, 40));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(198, 254, 81, 41));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(282, 208, 50, 50));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(388, 122, 50, 50));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(114, 170, 81, 40));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(30, 170, 81, 40));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(30, 212, 81, 40));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(30, 84, 249, 42));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(440, 212, 51, 41));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(425, 84, 66, 41));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(440, 169, 51, 41));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(114, 254, 81, 41));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(282, 251, 50, 49));
        pushButton_close_parenth = new QPushButton(centralwidget);
        pushButton_close_parenth->setObjectName(QString::fromUtf8("pushButton_close_parenth"));
        pushButton_close_parenth->setGeometry(QRect(353, 84, 70, 41));
        pushButton_close_parenth->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(440, 126, 51, 41));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(114, 212, 81, 40));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(30, 128, 81, 40));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(335, 208, 50, 50));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(114, 128, 81, 40));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(100, 100, 100);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(388, 208, 50, 50));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(30, 297, 81, 41));
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255,151,57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(30, 33, 461, 50));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        result->setLayoutDirection(Qt::RightToLeft);
        widget_graph = new QCustomPlot(centralwidget);
        widget_graph->setObjectName(QString::fromUtf8("widget_graph"));
        widget_graph->setGeometry(QRect(510, 90, 491, 246));
        pushButton_credit_calc = new QPushButton(centralwidget);
        pushButton_credit_calc->setObjectName(QString::fromUtf8("pushButton_credit_calc"));
        pushButton_credit_calc->setEnabled(true);
        pushButton_credit_calc->setGeometry(QRect(114, 293, 164, 49));
        pushButton_dep_calc = new QPushButton(centralwidget);
        pushButton_dep_calc->setObjectName(QString::fromUtf8("pushButton_dep_calc"));
        pushButton_dep_calc->setGeometry(QRect(281, 293, 211, 49));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 27, 491, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        sizePolicy.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(doubleSpinBox);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBox_set_min_x = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_set_min_x->setObjectName(QString::fromUtf8("doubleSpinBox_set_min_x"));
        sizePolicy.setHeightForWidth(doubleSpinBox_set_min_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_set_min_x->setSizePolicy(sizePolicy);
        doubleSpinBox_set_min_x->setMinimum(-99.000000000000000);
        doubleSpinBox_set_min_x->setValue(-10.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_set_min_x);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_6);

        doubleSpinBox_set_min_y = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_set_min_y->setObjectName(QString::fromUtf8("doubleSpinBox_set_min_y"));
        sizePolicy.setHeightForWidth(doubleSpinBox_set_min_y->sizePolicy().hasHeightForWidth());
        doubleSpinBox_set_min_y->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(doubleSpinBox_set_min_y);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_print_graph = new QPushButton(layoutWidget);
        pushButton_print_graph->setObjectName(QString::fromUtf8("pushButton_print_graph"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_print_graph->sizePolicy().hasHeightForWidth());
        pushButton_print_graph->setSizePolicy(sizePolicy1);
        pushButton_print_graph->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(pushButton_print_graph);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        doubleSpinBox_set_max_x = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_set_max_x->setObjectName(QString::fromUtf8("doubleSpinBox_set_max_x"));
        sizePolicy.setHeightForWidth(doubleSpinBox_set_max_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_set_max_x->setSizePolicy(sizePolicy);
        doubleSpinBox_set_max_x->setValue(10.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_set_max_x);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_7);

        doubleSpinBox_set_max_y = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_set_max_y->setObjectName(QString::fromUtf8("doubleSpinBox_set_max_y"));
        sizePolicy.setHeightForWidth(doubleSpinBox_set_max_y->sizePolicy().hasHeightForWidth());
        doubleSpinBox_set_max_y->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(doubleSpinBox_set_max_y);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_open_parenth->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_close_parenth->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        result->setText(QString());
        pushButton_credit_calc->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_dep_calc->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " x =", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "min x =", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "min y =", nullptr));
        pushButton_print_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "           max x =", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "max y =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
