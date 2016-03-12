#-------------------------------------------------
#
# Project created by QtCreator 2016-03-09T14:25:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cocheDeHomer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vehiculo.cpp \
    listavehiculos.cpp

HEADERS  += mainwindow.h \
    vehiculo.h \
    listavehiculos.h

FORMS    += mainwindow.ui \
    listavehiculos.ui
