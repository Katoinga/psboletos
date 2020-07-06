#include "ventas1.h"
#include "ui_ventas1.h"

Ventas1::Ventas1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventas1)
{
    ui->setupUi(this);
}

Ventas1::~Ventas1()
{
    delete ui;
}
