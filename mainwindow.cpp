#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pasajerowindow.h"
#include "vuelowindow.h"
#include "ventaswindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionIr_3_triggered()
{
    pasajerowindow*mainwindow= new pasajerowindow();
    mainwindow->show();
}

void MainWindow::on_actionIr_4_triggered()
{
    vuelowindow*mainwindow= new vuelowindow();
    mainwindow->show();
}

void MainWindow::on_actionIr_triggered()
{
    ventaswindow*mainwindow= new ventaswindow();
    mainwindow->show();
}
