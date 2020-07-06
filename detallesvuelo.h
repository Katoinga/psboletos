#ifndef DETALLESVUELO_H
#define DETALLESVUELO_H

#include <QDialog>

namespace Ui {
class detallesvuelo;
}

class detallesvuelo : public QDialog
{
    Q_OBJECT

public:
    explicit detallesvuelo(QWidget *parent = nullptr);
    ~detallesvuelo();

private:
    Ui::detallesvuelo *ui;
};

#endif // DETALLESVUELO_H
