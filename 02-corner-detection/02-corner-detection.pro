#-------------------------------------------------
#
# Project created by QtCreator 2015-06-14T10:01:27
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = 02-corner-detection
CONFIG   += console
CONFIG   -= app_bundle

#CONFIG += c++11
#QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.10

INCLUDEPATH += /usr/local/include **
LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_features2d -lopencv_calib3d -lopencv_objdetect -lopencv_flann


TEMPLATE = app


SOURCES += main.cpp
