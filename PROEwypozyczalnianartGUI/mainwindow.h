#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include "ui_mainwindow.h"
#include "newdialog.hpp"
#include "narty.hpp"
#include "centrumnarciarskie.hpp"
#include "wypozyczalnia.hpp"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

public slots:
	//void message();
	void pokazwypozyczalnie();
	void pokazwypozyczalnie2();
	void pokaznarty();
	void dodajwypozyczalnie();

protected:
	Ui::MainWindowClass ui;
	
	QGraphicsScene scene;
	QPixmap image;

	Narty narty;
	Wypozyczalnia wypozyczalnia;


};

#endif // MAINWINDOW_H