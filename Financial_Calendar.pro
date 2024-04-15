QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accounts.cpp \
    db_worker.cpp \
    dialog_add_category_income.cpp \
    dialog_add_category_spending.cpp \
    dialog_add_income.cpp \
    dialog_add_spending.cpp \
    dialog_edit_income.cpp \
    dialog_edit_spending.cpp \
    dialog_remove_income.cpp \
    dialog_remove_spending.cpp \
    income.cpp \
    main.cpp \
    mainwindow.cpp \
    spending.cpp \
    type_income.cpp \
    type_spending.cpp

HEADERS += \
    accounts.h \
    db_object.h \
    db_worker.h \
    dialog_add_category_income.h \
    dialog_add_category_spending.h \
    dialog_add_income.h \
    dialog_add_spending.h \
    dialog_edit_income.h \
    dialog_edit_spending.h \
    dialog_remove_income.h \
    dialog_remove_spending.h \
    income.h \
    mainwindow.h \
    spending.h \
    type_income.h \
    type_spending.h

FORMS += \
    dialog_add_category_income.ui \
    dialog_add_category_spending.ui \
    dialog_add_income.ui \
    dialog_add_spending.ui \
    dialog_edit_income.ui \
    dialog_edit_spending.ui \
    dialog_remove_income.ui \
    dialog_remove_spending.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
