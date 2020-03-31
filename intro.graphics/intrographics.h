#pragma once

#include <QtWidgets/QWidget>
#include "ui_intrographics.h"

class intrographics : public QWidget
{
	Q_OBJECT

public:
	intrographics(QWidget *parent = Q_NULLPTR);
	int tmp;

private:
	Ui::intrographicsClass ui;
};
