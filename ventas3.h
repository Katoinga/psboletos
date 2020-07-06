#ifndef VENTAS3_H
#define VENTAS3_H

#include <QDialog>

namespace Ui {
class ventas3;
}

class ventas3 : public QDialog
{
    Q_OBJECT

public:
    explicit ventas3(QWidget *parent = nullptr);
    ~ventas3();

private:
    Ui::ventas3 *ui;
};

#endif // VENTAS3_H
