#ifndef DETALLEVUELO_H
#define DETALLEVUELO_H

#include <QDialog>

namespace Ui {
class detallevuelo;
}

class detallevuelo : public QDialog
{
    Q_OBJECT

public:
    explicit detallevuelo(QWidget *parent = nullptr);
    ~detallevuelo();

private:
    Ui::detallevuelo *ui;
};

#endif // DETALLEVUELO_H
