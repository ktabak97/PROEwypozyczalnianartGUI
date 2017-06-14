#ifndef	NEWDIALOG_H
#define NEWDIALOG_H

#pragma once
#include <QDialog>
#include <QtWidgets/QMainWindow>
#include <QGraphicsScene>
#include "ui_new_dialog.h"
#include "mainwindow.h"
#include "narty.hpp"
#include "centrumnarciarskie.hpp"
#include "wypozyczalnia.hpp"

class NewDialog : public QDialog, public Ui::Dialog, public Wypozyczalnia
{
	Q_OBJECT

public:
	NewDialog(QWidget * parent = 0);
	~NewDialog();

public slots:
	void ourAction();
	void pokaznartywdialogu();
	void dodajNartyGUI();
	void dodajNartyGUI2();
	void dodajNartyGUI3();

private:
	Ui::Dialog ui;
	QGraphicsScene scene2;
	QPixmap image2;
	QGraphicsScene scene3;
	QPixmap image3;
	QGraphicsScene scene4;
	QPixmap image4;
};
#endif // NEWDIALOG_H