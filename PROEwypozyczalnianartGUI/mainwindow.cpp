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

void MainWindow::pokaznarty()
{
	NewDialog dialog;
	dialog.exec();
}

