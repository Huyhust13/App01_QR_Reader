#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include "opencv2/opencv.hpp"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

private slots:
    void on_inputBrowsePushButton_pressed();

private:
    Ui::MainWindow *ui;
    void loadSettings();
};

#endif // MAINWINDOW_H
