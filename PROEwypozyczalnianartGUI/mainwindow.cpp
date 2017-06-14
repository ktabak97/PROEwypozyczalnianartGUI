#include "mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent):
	QMainWindow(parent)
{
	ui.setupUi(this);
}

//void MainWindow::message()
//{
//	QMessageBox mb;
//	mb.setText("Test przycisku");
//	mb.exec();
//}

MainWindow::~MainWindow()
{

}
void MainWindow::dodajwypozyczalnie()
{
	Wypozyczalnia testowa;
}
void MainWindow::pokazwypozyczalnie()
{
	Wypozyczalnia testowa;

	ui.lineEdit_1->setText(QString::fromStdString(testowa.typ_lokalu));
	ui.lineEdit_2->setText(QString::fromStdString(testowa.adres));
	ui.lineEdit_6->setText("Ilosc pomieszczen");
	ui.lineEdit_3->setText(QString::number(testowa.pomieszczenia));
	ui.lineEdit_7->setText(QString::number(testowa.ilosc_nart));



	ui.graphicsView->setScene(&scene);
	if (image.load("wypozyczalnia.jpg"));
		{
		scene.setSceneRect(image.rect());
		scene.clear();
		scene.addPixmap(image);
		ui.graphicsView->fitInView(image.rect());
		}
}

void MainWindow::pokazwypozyczalnie2()
{
	Wypozyczalnia druga("Mysliborska", 3);

	ui.lineEdit_1->setText(QString::fromStdString(druga.typ_lokalu));
	ui.lineEdit_2->setText(QString::fromStdString(druga.adres));
	ui.lineEdit_3->setText(QString::number(druga.pomieszczenia));
	ui.lineEdit_6->setText("Ilosc pomieszczen");
	ui.lineEdit_7->setText(QString::number(druga.ilosc_nart));



	ui.graphicsView->setScene(&scene);
	if (image.load("wypozyczalnia2.jpg"));
	{
		scene.setSceneRect(image.rect());
		scene.clear();
		scene.addPixmap(image);
		ui.graphicsView->fitInView(image.rect());
	}
}

void MainWindow::pokazwypozyczalnianartzawodniczych()
{
	WypozyczalniaNartZawodniczych wypnartzawod;

	ui.lineEdit_1->setText(QString::fromStdString(wypnartzawod.typ_lokalu));
	ui.lineEdit_2->setText(QString::fromStdString(wypnartzawod.adres));
	ui.lineEdit_6->setText("Kat ostrzenia");
	ui.lineEdit_3->setText(QString::number(wypnartzawod.standardowykat));
	ui.lineEdit_7->setText(QString::number(wypnartzawod.ilosc_nartZ));



	ui.graphicsView->setScene(&scene);
	if (image.load("wypozyczalnia3.jpg"));
	{
		scene.setSceneRect(image.rect());
		scene.clear();
		scene.addPixmap(image);
		ui.graphicsView->fitInView(image.rect());
	}
}

void MainWindow::pokaznarty()
{
	NewDialog dialog;
	dialog.exec();
}

//void MainWindow::pokaznarty2()
//{
//	Dialog2 dialog2;
//	dialog2.exec();
//}
