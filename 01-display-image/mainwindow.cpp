#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cv::Mat inputImage = cv::imread("/Users/semih/GitHub/opencv-qt-playground/01-display-image/lena.jpg");
    cv::imshow("Display Image", inputImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
