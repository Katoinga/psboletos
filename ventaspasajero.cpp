#include "ventaspasajero.h"
#include "ui_ventaspasajero.h"

ventasPasajero::ventasPasajero(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventasPasajero)
{
    ui->setupUi(this);
}

ventasPasajero::~ventasPasajero()
{
    delete ui;
}
