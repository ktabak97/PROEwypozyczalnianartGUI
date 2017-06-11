/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionWyj_cie;
    QWidget *centralWidget;
    QPushButton *pokazNartyButton;
    QLineEdit *lineEdit_1;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menucos;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/ikonka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-image: url(:/new/prefix2/carbonfiber.jpg);\n"
"}"));
        actionWyj_cie = new QAction(MainWindowClass);
        actionWyj_cie->setObjectName(QStringLiteral("actionWyj_cie"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        pokazNartyButton = new QPushButton(centralWidget);
        pokazNartyButton->setObjectName(QStringLiteral("pokazNartyButton"));
        pokazNartyButton->setGeometry(QRect(0, 10, 151, 31));
        pokazNartyButton->setStyleSheet(QStringLiteral(""));
        lineEdit_1 = new QLineEdit(centralWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(130, 40, 201, 20));
        lineEdit_1->setAutoFillBackground(false);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 130, 321, 211));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 40, 111, 20));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 60, 201, 20));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 80, 201, 20));
        lineEdit_3->setFocusPolicy(Qt::StrongFocus);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setFrame(true);
        lineEdit_3->setEchoMode(QLineEdit::Normal);
        lineEdit_3->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_3->setClearButtonEnabled(false);
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 60, 111, 20));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(10, 80, 111, 20));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 100, 111, 20));
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(130, 100, 201, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 10, 171, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 10, 181, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menucos = new QMenu(menuBar);
        menucos->setObjectName(QStringLiteral("menucos"));
        MainWindowClass->setMenuBar(menuBar);

        menuBar->addAction(menucos->menuAction());
        menucos->addAction(actionWyj_cie);

        retranslateUi(MainWindowClass);
        QObject::connect(pokazNartyButton, SIGNAL(clicked()), MainWindowClass, SLOT(pokazwypozyczalnie()));
        QObject::connect(actionWyj_cie, SIGNAL(triggered()), MainWindowClass, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(pokaznarty()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindowClass, SLOT(pokazwypozyczalnie2()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Wypozyczalnia nart", Q_NULLPTR));
        actionWyj_cie->setText(QApplication::translate("MainWindowClass", "Wyj\305\233cie", Q_NULLPTR));
        pokazNartyButton->setText(QApplication::translate("MainWindowClass", "Pokaz wypozyczalnie 1", Q_NULLPTR));
        lineEdit_1->setText(QString());
        lineEdit_4->setText(QApplication::translate("MainWindowClass", "Typ lokalu", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("MainWindowClass", "Adres", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("MainWindowClass", "Ilosc pomieszczen", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindowClass", "Ilosc nart", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowClass", "Pokaz narty", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindowClass", "Pokaz wypozyczalnie 2", Q_NULLPTR));
        menucos->setTitle(QApplication::translate("MainWindowClass", "Plik", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
