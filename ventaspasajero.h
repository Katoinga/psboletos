#ifndef VENTASPASAJERO_H
#define VENTASPASAJERO_H

#include <QDialog>

namespace Ui {
class ventasPasajero;
}

class ventasPasajero : public QDialog
{
    Q_OBJECT

public:
    explicit ventasPasajero(QWidget *parent = nullptr);
    ~ventasPasajero();

private:
    Ui::ventasPasajero *ui;
};

#endif // VENTASPASAJERO_H
