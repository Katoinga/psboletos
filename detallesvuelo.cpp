#include "detallesvuelo.h"
#include "ui_detallesvuelo.h"

detallesvuelo::detallesvuelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detallesvuelo)
{
    ui->setupUi(this);
}

detallesvuelo::~detallesvuelo()
{
    delete ui;
}
