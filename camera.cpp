#include "camera.h"
#include "ui_camera.h"
#include <QMessageBox>

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);

    //Camera devices:
    setCamera(QCameraInfo::defaultCamera());
}

camera::~camera()
{
    delete ui;
}

void camera::setCamera(const QCameraInfo &cameraInfo)
{
    Camera = new QCamera(cameraInfo);
    imageCapture = new QCameraImageCapture(Camera);
    Camera->setViewfinder(ui->viewfinder);
    connect(imageCapture, &QCameraImageCapture::readyForCaptureChanged, this, &camera::readyForCapture);
    Camera->start();
}


void camera::readyForCapture(bool ready)
{
    ui->TakeimageButton->setEnabled(ready);
}


void camera::on_TakeimageButton_clicked()
{
    isCapturingImage = true;
    imageCapture->capture();

        QMessageBox::information(nullptr, QObject::tr("check your images !"),
                    QObject::tr("photo has been taken !\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


