#include "newdialog.hpp"
#include <QMessageBox>


NewDialog::NewDialog(QWidget * parent)
{
	setupUi(this);
}

NewDialog::~NewDialog() {
	
}

void NewDialog::dodajNartyGUI()
{
	Narty *narty = new Narty("Head");
	this->wszystkie_narty.push_back(narty);
	++ilosc_nart;
}

void NewDialog::pokaznartywdialogu()
{
	lineEdit_1->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocNazwa()));
	lineEdit_2->setText(QString::number(wszystkie_narty.at(0)->zwrocCena()));
	lineEdit_3->setText(QString::number(wszystkie_narty.at(0)->zwrocDlugosc()));
	lineEdit_4->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocPoziom()));
	lineEdit_5->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocDostepnosc()));
	
	try {
		lineEdit_10->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocNazwa()));
	}
	catch(out_of_range)
	{
		lineEdit_10->setText("nie ma takich nart");
	}
	
	graphicsView2->setScene(&scene2);
	if (image2.load("nartypodstawowe.jpg"));
	{
		scene2.setSceneRect(image2.rect());
		scene2.clear();
		scene2.addPixmap(image2);
		graphicsView2->fitInView(image2.rect());
	}
}

void NewDialog::ourAction()
{
	QMessageBox mb;
	mb.setText("test");
	mb.exec();
}

