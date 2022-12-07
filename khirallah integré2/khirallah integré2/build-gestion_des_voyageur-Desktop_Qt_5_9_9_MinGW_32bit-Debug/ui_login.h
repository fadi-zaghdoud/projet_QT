/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *email_login;
    QPushButton *pb_login;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *password_login;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(562, 508);
        email_login = new QLineEdit(login);
        email_login->setObjectName(QStringLiteral("email_login"));
        email_login->setGeometry(QRect(70, 220, 301, 39));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat SemiBold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        email_login->setFont(font);
        email_login->setStyleSheet(QLatin1String("background-color: rgba(126, 75, 255,60%);\n"
"border-radius: 18px;\n"
"padding: 5px 10px;\n"
"font{\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"color: white;}\n"
""));
        pb_login = new QPushButton(login);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(150, 350, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pb_login->setFont(font1);
        pb_login->setCursor(QCursor(Qt::PointingHandCursor));
        pb_login->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: rgba(126, 75, 255,80%);  \n"
"color: white;\n"
"  padding: 10px 12px;\n"
"border-radius:17px;\n"
"font: 75 9pt \"MS Shell Dlg 2\";\n"
"}\n"
"QPushButton::selected {\n"
"    color: white;\n"
"   background-color:#FF7244;\n"
"\n"
"}\n"
"QPushButton::hover {\n"
"  background: #FF7244;\n"
" }"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 270, 121, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(17);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_2->setFont(font2);
        label_2->setStyleSheet(QLatin1String("\n"
"\n"
"font: 75 17pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 180, 101, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("\n"
"font: 75 17pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        password_login = new QLineEdit(login);
        password_login->setObjectName(QStringLiteral("password_login"));
        password_login->setGeometry(QRect(70, 300, 301, 39));
        password_login->setFont(font);
        password_login->setStyleSheet(QLatin1String("background-color: rgba(126, 75, 255,60%);\n"
"border-radius: 18px;\n"
"padding: 5px 10px;\n"
"font{\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);}"));
        password_login->setEchoMode(QLineEdit::Password);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        pb_login->setText(QApplication::translate("login", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
