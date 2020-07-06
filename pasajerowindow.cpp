#include "pasajerowindow.h"
#include "ui_pasajerowindow.h"

pasajerowindow::pasajerowindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pasajerowindow)
{
    ui->setupUi(this);
}

pasajerowindow::~pasajerowindow()
{
    delete ui;
}
