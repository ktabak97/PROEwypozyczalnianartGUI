//#include "dialog2.hpp"
//#include <QMessageBox>
//
//
//Dialog2::Dialog2(QWidget * parent)
//{
//	setupUi(this);
//}
//
//Dialog2::~Dialog2() {
//
//}
//
//void Dialog2::dodajNartyGUI()
//{
//	Narty *narty = new Narty("Head");
//	this->wszystkie_narty.push_back(narty);
//	++ilosc_nart;
//}
//
//void Dialog2::pokaznartywdialogu()
//{
//	lineEdit_1->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocNazwa()));
//	lineEdit_2->setText(QString::number(wszystkie_narty.at(0)->zwrocCena()));
//	lineEdit_3->setText(QString::number(wszystkie_narty.at(0)->zwrocDlugosc()));
//	lineEdit_4->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocPoziom()));
//	lineEdit_5->setText(QString::fromStdString(wszystkie_narty.at(0)->zwrocDostepnosc()));
//
//	graphicsView3->setScene(&scene3);
//	if (image3.load("nartypodstawowe.jpg"));
//	{
//		scene3.setSceneRect(image3.rect());
//		scene3.clear();
//		scene3.addPixmap(image3);
//		graphicsView3->fitInView(image3.rect());
//	}
//
//	try {
//		lineEdit_21->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocNazwa()));
//		lineEdit_22->setText(QString::number(wszystkie_narty.at(1)->zwrocCena()));
//		lineEdit_23->setText(QString::number(wszystkie_narty.at(1)->zwrocDlugosc()));
//		lineEdit_24->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocPoziom()));
//		lineEdit_25->setText(QString::fromStdString(wszystkie_narty.at(1)->zwrocDostepnosc()));
//
//		graphicsView3->setScene(&scene3);
//		if (image3.load("head.jpg"));
//		{
//			scene3.setSceneRect(image3.rect());
//			scene3.clear();
//			scene3.addPixmap(image3);
//			graphicsView3->fitInView(image3.rect());
//		}
//
//	}
//	catch (out_of_range)
//	{
//		lineEdit_21->setText("nie ma takich nart");
//		lineEdit_22->setText("nie ma takich nart");
//		lineEdit_23->setText("nie ma takich nart");
//		lineEdit_24->setText("nie ma takich nart");
//		lineEdit_25->setText("nie ma takich nart");
//	}
//
//
//}
//
//void Dialog2::ourAction()
//{
//	QMessageBox mb;
//	mb.setText("test");
//	mb.exec();
//}
//
