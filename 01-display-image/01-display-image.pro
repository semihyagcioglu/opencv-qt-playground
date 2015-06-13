#-------------------------------------------------
#
# Project created by QtCreator 2015-06-13T11:41:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01-display-image
TEMPLATE = app

#CONFIG += c++11
#QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.10

INCLUDEPATH += /usr/local/include **
LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui



SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
