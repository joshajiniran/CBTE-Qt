#-------------------------------------------------
#
# Project created by QtCreator 2017-11-22T23:59:33
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CBTE
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    editablesqlquerymodel.cpp \
    questionmanager.cpp \
    mainwindow.cpp \
    registerdialog.cpp \
    usersqlquerymodel.cpp

HEADERS  += questionmanager.h \
    mainwindow.h \
    editablesqlquerymodel.h \
    registerdialog.h \
    usersqlquerymodel.h

FORMS    += mainwindow.ui \
    questionmanager.ui \
    registerdialog.ui

DISTFILES += \
    logo.jpeg \
    exampics \
    success.png \
    users.png

RESOURCES += \
    contents.qrc
