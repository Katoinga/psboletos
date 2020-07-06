#include "detallevuelo.h"
#include "ui_detallevuelo.h"

detallevuelo::detallevuelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detallevuelo)
{
    ui->setupUi(this);
}

detallevuelo::~detallevuelo()
{
    delete ui;
}
