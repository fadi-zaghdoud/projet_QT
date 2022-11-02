/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_num;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_dest;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label_5;
    QLineEdit *le_numS;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLineEdit *le_dest_2;
    QLabel *label_7;
    QLineEdit *le_num_2;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_4;
    QTableView *tab_voyageur;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(966, 674);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 30, 431, 351));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget:pane {\n"
"border: 1px solid gray;\n"
"}\n"
"QTabWidget::pane {\n"
"  border: 1px solid lightgray;\n"
"  top:-1px; \n"
"  background:rgb(0, 170, 255); \n"
"} \n"
"\n"
"QTabBar::tab {\n"
"  background:rgb(255, 0, 0); \n"
"  border: 1px rgb(0, 85, 255); \n"
"  padding: 15px;\n"
"} \n"
"\n"
"QTabBar::tab:selected { \n"
"  background: rgb(245, 245, 245); \n"
"  margin-bottom: -1px; \n"
"}\n"
"QTabWidget {  \n"
"    background-color:#0f2033;\n"
"    border-top: 2px solid #C2C7CB;  \n"
"} \n"
"QTabWidget::pane { /* The tab widget frame */  \n"
"    border-top: 3px solid #C2C7CB;  \n"
"} \n"
" /* Style the tab using the tab sub-control. Note that \n"
"    it reads QTabBar _not_ QTabWidget */  \n"
"QTabBar::tab {  \n"
"    background-color:#0f2033;\n"
"    border: 1px solid #4973b4;  \n"
"    min-width: 100px; \n"
"    min-height:22px;\n"
"    padding: 0px  2px; \n"
"    color: rgb(255, 255, 255);\n"
"    margin-left: 1px;\n"
"    font: 75 12pt \"NSimSun\";\n"
"}  \n"
"  \n"
"QTabBar::tab:selected, QTabBar:"
                        ":tab:hover {  \n"
"    background-color:rgb(0, 0, 255);\n"
"    margin-top: 0px;\n"
"    \n"
"}  \n"
"  \n"
"\n"
"  \n"
"QTabBar::tab:!selected {  \n"
"    margin-top: 5px; /* make non-selected tabs look smaller */  \n"
"}  \n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 69, 20));
        label->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 90, 69, 20));
        label_2->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 140, 69, 20));
        label_3->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 200, 121, 20));
        label_4->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        le_num = new QLineEdit(tab);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setGeometry(QRect(150, 60, 113, 25));
        le_num->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(150, 110, 113, 25));
        le_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        le_prenom = new QLineEdit(tab);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(150, 170, 113, 25));
        le_prenom->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        le_dest = new QLineEdit(tab);
        le_dest->setObjectName(QStringLiteral("le_dest"));
        le_dest->setGeometry(QRect(150, 230, 113, 25));
        le_dest->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 280, 124, 23));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(0, 0, 255);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 100, 231, 20));
        label_5->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        le_numS = new QLineEdit(tab_2);
        le_numS->setObjectName(QStringLiteral("le_numS"));
        le_numS->setGeometry(QRect(160, 130, 113, 25));
        le_numS->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 240, 124, 23));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(0, 0, 255);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 50, 69, 20));
        label_6->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 280, 124, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(245, 245, 245);\n"
"background-color: rgb(0, 0, 255);\n"
"border-width: 1px;\n"
"border-color: rgb(0, 0, 255);\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 75 ;\n"
"padding-left: 1px;\n"
"padding-right: 1px;\n"
"min-width: 120px;\n"
"max-width: 50px;\n"
"min-height: 15px;\n"
"max-height: 15px;\n"
"font: 75 12pt \"NSimSun\";\n"
"}"));
        le_nom_2 = new QLineEdit(tab_3);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(140, 110, 113, 25));
        le_nom_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        le_prenom_2 = new QLineEdit(tab_3);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(140, 170, 113, 25));
        le_prenom_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        le_dest_2 = new QLineEdit(tab_3);
        le_dest_2->setObjectName(QStringLiteral("le_dest_2"));
        le_dest_2->setGeometry(QRect(140, 220, 113, 25));
        le_dest_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 90, 69, 20));
        label_7->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        le_num_2 = new QLineEdit(tab_3);
        le_num_2->setObjectName(QStringLiteral("le_num_2"));
        le_num_2->setGeometry(QRect(140, 70, 113, 25));
        le_num_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 200, 141, 20));
        label_8->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 140, 69, 20));
        label_9->setStyleSheet(QStringLiteral("font: 75 12pt \"NSimSun\";"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_voyageur = new QTableView(tab_4);
        tab_voyageur->setObjectName(QStringLiteral("tab_voyageur"));
        tab_voyageur->setGeometry(QRect(0, 0, 431, 341));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 966, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "numero", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "destination", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Le numero du voyageur", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "num", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "destination", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
