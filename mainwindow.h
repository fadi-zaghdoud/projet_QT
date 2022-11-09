#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employe.h"
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
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_rechercher_clicked();

    void on_pb_excel_clicked();

    void on_id_clicked();

    void on_nom_clicked();

    void on_pb_imprimer_clicked();

    void on_pb_stat_clicked();

private:
    Ui::MainWindow *ui;
    employe Etmp;
};

#endif // MAINWINDOW_H
