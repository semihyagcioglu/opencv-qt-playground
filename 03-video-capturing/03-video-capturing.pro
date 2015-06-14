#-------------------------------------------------
#
# Project created by QtCreator 2015-06-14T18:05:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 03-video-capturing
TEMPLATE = app

INCLUDEPATH += /usr/local/include **
LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_features2d -lopencv_calib3d -lopencv_objdetect -lopencv_flann -lopencv_photo -lopencv_stitching -lopencv_superres -lopencv_ts -lopencv_videostab -lopencv_videoio


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
