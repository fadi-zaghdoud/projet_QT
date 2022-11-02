#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gvol.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    GVol V;

};

#endif // MAINWINDOW_H
