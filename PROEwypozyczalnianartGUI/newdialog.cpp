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

	graphicsView2_2->setScene(&scene3);
	if (image3.load("head.jpg"));
	{
		scene3.setSceneRect(image3.rect());
		scene3.clear();
		scene3.addPixmap(image3);
		graphicsView2_2->fitInView(image3.rect());
	}

}


void NewDialog::dodajNartyGUI2()
{
	Narty *narty = new Narty("Fischer");
	this->wszystkie_narty.push_back(narty);
	++ilosc_nart;

	graphicsView2_3->setScene(&scene4);
	if (image4.load("fischer.jpg"));
	{
		scene4.setSceneRect(image4.rect());
		scene4.clear();
		scene4.addPixmap(image4);
		graphicsView2_3->fitInView(image4.rect());
	}

}

void NewDialog::dodajNartyGUI3()
{
	Narty *narty = new Narty("Fisher");
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
	
	graphicsView2->setScene(&scene2);
	if (image2.load("nartypodstawowe.jpg"));
	{
		scene2.setSceneRect(image2.rect());
		scene2.clear();
		scene2.addPixmap(image2);
		graphicsView2->fitInView(image2.rect());
	}

	try {

		lineEdit_21->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocNazwa()));
		lineEdit_22->setText(QString::number(wszystkie_narty.at(1)->zwrocCena()));
		lineEdit_23->setText(QString::number(wszystkie_narty.at(1)->zwrocDlugosc()));
		lineEdit_24->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocPoziom()));
		lineEdit_25->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocDostepnosc()));
/*
		graphicsView2_2->setScene(&scene2);
		if (image2.load("head.jpg"));
		{
			scene2.setSceneRect(image2.rect());
			scene2.clear();
			scene2.addPixmap(image2);
			graphicsView2->fitInView(image2.rect());
		}*/

/*
		lineEdit_28->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocNazwa()));
		lineEdit_27->setText(QString::number(wszystkie_narty.at(2)->zwrocCena()));
		lineEdit_30->setText(QString::number(wszystkie_narty.at(2)->zwrocDlugosc()));
		lineEdit_26->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocPoziom()));
		lineEdit_29->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocDostepnosc()));
*/
		//graphicsView2_2->setScene(&scene2);
		//if (image2.load("fisher.jpg"));
		//{
		//	scene2.setSceneRect(image2.rect());
		//	scene2.clear();
		//	scene2.addPixmap(image2);
		//	graphicsView2->fitInView(image2.rect());
		//}


	}
	catch(out_of_range)
	{
		lineEdit_21->setText("nie ma takich nart");
		lineEdit_22->setText("nie ma takich nart");
		lineEdit_23->setText("nie ma takich nart");
		lineEdit_24->setText("nie ma takich nart");
		lineEdit_25->setText("nie ma takich nart");
		//lineEdit_28->setText("nie ma takich nart");
		//lineEdit_27->setText("nie ma takich nart");
		//lineEdit_30->setText("nie ma takich nart");
		//lineEdit_26->setText("nie ma takich nart");
		//lineEdit_29->setText("nie ma takich nart");

	}
	
	try
	{
		lineEdit_28->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocNazwa()));
		lineEdit_27->setText(QString::number(wszystkie_narty.at(2)->zwrocCena()));
		lineEdit_30->setText(QString::number(wszystkie_narty.at(2)->zwrocDlugosc()));
		lineEdit_26->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocPoziom()));
		lineEdit_29->setText(QString::fromStdString(wszystkie_narty.at(2)->zwrocDostepnosc()));

	}
	catch (out_of_range)
	{
		lineEdit_28->setText("nie ma takich nart");
		lineEdit_27->setText("nie ma takich nart");
		lineEdit_30->setText("nie ma takich nart");
		lineEdit_26->setText("nie ma takich nart");
		lineEdit_29->setText("nie ma takich nart");

	}
}

void NewDialog::ourAction()
{
	QMessageBox mb;
	mb.setText("test");
	mb.exec();
}

