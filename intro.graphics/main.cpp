#include "intrographics.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	intrographics w;
	w.show();
	return a.exec();
}
