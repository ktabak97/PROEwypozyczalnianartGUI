/********************************************************************************
** Form generated from reading UI file 'new_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIALOG_H
#define UI_NEW_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(562, 329);
        Dialog->setStyleSheet(QLatin1String("QDialog\n"
"{background-image: url(:/new/prefix2/carbonfiber.jpg)\n"
"}\n"
""));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 75, 23));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 280, 75, 23));
        graphicsView2 = new QGraphicsView(Dialog);
        graphicsView2->setObjectName(QStringLiteral("graphicsView2"));
        graphicsView2->setGeometry(QRect(270, 50, 256, 192));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 81, 20));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 90, 113, 20));
        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 110, 113, 20));
        lineEdit_4 = new QLineEdit(Dialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 130, 113, 20));
        lineEdit_5 = new QLineEdit(Dialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(130, 150, 113, 20));
        lineEdit_6 = new QLineEdit(Dialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(20, 90, 81, 20));
        lineEdit_7 = new QLineEdit(Dialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(20, 110, 81, 20));
        lineEdit_8 = new QLineEdit(Dialog);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(20, 130, 81, 20));
        lineEdit_9 = new QLineEdit(Dialog);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(20, 150, 81, 20));
        lineEdit_1 = new QLineEdit(Dialog);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(130, 70, 113, 20));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 200, 75, 23));
        lineEdit_10 = new QLineEdit(Dialog);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(140, 200, 113, 20));

        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(pokaznartywdialogu()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Dialog, SLOT(dodajNartyGUI()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "Pokaz narty", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "Zamknij", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Dialog", "Nazwa:", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("Dialog", "Cena:", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("Dialog", "Dlugosc:", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("Dialog", "Poziom:", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("Dialog", "Dostepnosc:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "dodajnarty2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIALOG_H
