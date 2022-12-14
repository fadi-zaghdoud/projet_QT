#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gvoyageur.h"
#include "smtp.h"
#include "arduino.h"
#include "gvol.h"
#include "employe.h"
#include "materiel.h"
#include <qjsondocument.h>

#include <QJsonArray>

#include <QJsonObject>

#include <QNetworkAccessManager>

#include <QNetworkCookie>

#include <QNetworkCookieJar>

#include <QNetworkReply>

#include <QNetworkSession>
QT_BEGIN_NAMESPACE

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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_stat_clicked();

    void on_sendBtn_clicked();

    void on_browseBtn_clicked();

    void mailSent(QString);


    void on_Qr_clicked();

    void on_tunisair_clicked();







 void on_ajoutervol_clicked();

 void on_supprimervol_clicked();



 void on_modifiervol_clicked();

 void on_stati_clicked();

 void on_tri_clicked();

 void on_rech_clicked();

 void on_generationpdfvol_clicked();



 void on_tls_2_clicked();

 void on_kounouz_clicked();



 void on_updatemap_clicked();

 void on_tri_par_etat_clicked();

 void on_update_clicked();


 void on_calendarWidget_clicked(const QDate &date);

 void on_addvol_clicked();




 void on_pb_rechercher_clicked();

 void on_pb_excel_clicked();

 void on_id_clicked();

 void on_nom_clicked();

 void on_pushButtone_clicked();

 void on_pb_stat_clicked();

 void on_qr_clicked();
 void readfile();
 void  on_tabWidget_currentChanged(int index);





 void on_pb_modifier_2_clicked();

 void on_pb_ajouter_e_clicked();

 void on_pb_supprimer_2_clicked();
 void on_pushButton_10_clicked();

 void on_pushButton_11_clicked();

 void on_pushButton_12_clicked();

 void on_pushButton__clicked();

 void on_pushButton_2__clicked();

 void on_pushButton_3__clicked();



 void on_pushButton_4__clicked();

 void on_trienom_clicked();

 void on_recherche_clicked();

 void on_frame_2_customContextMenuRequested(const QPoint &pos);
 void refresh();

 void on_comboBox_3_activated(const QString &arg1);
 //materiel
 void on_pb_ajouter_mat_clicked();

 void on_pb_supprimer_mat_clicked();

 void on_pb_mod_mat_clicked();

 void on_lienEdit_recherche_mat_textChanged();

 void on_trier_mat_clicked();

 void on_pdfexport_mat_clicked();

private:
    Ui::MainWindow *ui;
    Materiel M;
    GVoyageur voy;
    GVol V;
    employe Etmp;
    QStringList files;
    Arduino A ;
    QByteArray data; // variable contenant les donn??es re??ues
        QByteArray ID; // variable contenant les donn??es re??ues
        QNetworkAccessManager *manager;

                   QByteArray token = "";

                   QByteArray user = "";

                   QByteArray name = "";

                   QJsonObject json;

                   QJsonArray selected_day_json;

                   QString select_date;

                   QByteArray post(QString url, QByteArray data, const char *type);

                   QByteArray get(QString url);

                   QJsonObject format(QByteArray data);

                   void updatetoken(QNetworkReply *reply);
            // objet temporaire
                  // QByteArray ID; // variable contenant les donn??es re??ues

        };



#endif // MAINWINDOW_H
