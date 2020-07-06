#include "pasajeroswindow.h"
#include "ui_pasajeroswindow.h"

pasajeroswindow::pasajeroswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pasajeroswindow)
{
    ui->setupUi(this);
}

pasajeroswindow::~pasajeroswindow()
{
    delete ui;
}
