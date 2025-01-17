QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    credit_calc.cpp \
    deposit_calc.cpp \
    main.cpp \
    mainwindow.cpp \
    ../s21_calc_tools_stack.c \
    ../s21_calc_tools_validator.c \
    qcustomplot.cpp

HEADERS += \
    credit_calc.h \
    deposit_calc.h \
    mainwindow.h \
    ../s21_my_calc.h \
    qcustomplot.h

FORMS += \
    credit_calc.ui \
    deposit_calc.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
