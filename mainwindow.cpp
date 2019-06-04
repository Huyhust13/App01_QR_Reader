#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadSettings()
{
    ui->readFromImageRadioButton->setChecked(1);
}

void MainWindow::on_inputBrowsePushButton_pressed()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Open input Image",
                                                    QDir::homePath(),
                                                    "Images (*.jpg *.JPG *.png *.PNG)");
    if (QFile::exists(fileName)) {
        ui->inputImageLineEdit->setText(fileName);
    }
}
