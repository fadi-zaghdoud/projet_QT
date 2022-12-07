#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//#include <arduino.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void refresh();
    ~MainWindow();

private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_13_clicked();



    void on_pushButton_4_clicked();

    void on_trienom_clicked();

    void on_recherche_clicked();

    void on_frame_2_customContextMenuRequested(const QPoint &pos);

    void on_comboBox_3_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QByteArray ID; // variable contenant les données reçues

     //   Arduino A; // objet temporaire
};
#endif // MAINWINDOW_H
