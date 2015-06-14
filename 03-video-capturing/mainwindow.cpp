#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/tracking.hpp>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbStartCapturing_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Started Capturing. Press ESC to end");
    msgBox.exec();

    cv::VideoCapture capture(0); // open default camera

    if (capture.isOpened())
    {
        cv::namedWindow("Live Camera", CV_WINDOW_AUTOSIZE);
        cv::Mat camimg;

        while(1)
        {
            capture >> camimg; // read frames
            cv::imshow("Live Camera", camimg);
            int key = cv::waitKey(1);
            if ( key == 27 ) // press ESC to end
            {
                break;
            }
        }
    }
}
