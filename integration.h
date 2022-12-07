#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <QMainWindow>
#include "employe.h"
#include  "arduino.h"
namespace Ui {
class integration;
}

class integration : public QMainWindow
{
    Q_OBJECT

public:
    explicit integration(QWidget *parent = nullptr);
    ~integration();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_rechercher_clicked();

    void on_pb_excel_clicked();

    void on_id_clicked();

    void on_nom_clicked();

    void on_pushButton_clicked();

    void on_pb_stat_clicked();

    void on_qr_clicked();
    void readfile();
    void  on_tabWidget_currentChanged(int index);

    void on_pb_enregistrer_empreinte_clicked();

private:
    Ui::integration *ui;
    employe Etmp;
    Arduino A;
    QByteArray data;
};

#endif // INTEGRATION_H
