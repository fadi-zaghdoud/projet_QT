/********************************************************************************
** Form generated from reading UI file 'pdf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDF_H
#define UI_PDF_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pdf
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *line_pdf;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pdf)
    {
        if (pdf->objectName().isEmpty())
            pdf->setObjectName(QStringLiteral("pdf"));
        pdf->resize(800, 600);
        centralwidget = new QWidget(pdf);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 230, 61, 16));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
" "));
        line_pdf = new QLineEdit(centralwidget);
        line_pdf->setObjectName(QStringLiteral("line_pdf"));
        line_pdf->setGeometry(QRect(260, 190, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 190, 56, 16));
        pdf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pdf);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        pdf->setMenuBar(menubar);
        statusbar = new QStatusBar(pdf);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        pdf->setStatusBar(statusbar);

        retranslateUi(pdf);

        QMetaObject::connectSlotsByName(pdf);
    } // setupUi

    void retranslateUi(QMainWindow *pdf)
    {
        pdf->setWindowTitle(QApplication::translate("pdf", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pdf", "EXPORT", Q_NULLPTR));
        label->setText(QApplication::translate("pdf", "SET ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pdf: public Ui_pdf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF_H
