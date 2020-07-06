#include "vueloswindow.h"
#include "ui_vueloswindow.h"

vueloswindow::vueloswindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vueloswindow)
{
    ui->setupUi(this);
}

vueloswindow::~vueloswindow()
{
    delete ui;
}
