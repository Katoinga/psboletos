#ifndef PASAJEROWINDOW_H
#define PASAJEROWINDOW_H

#include <QMainWindow>

namespace Ui {
class pasajerowindow;
}

class pasajerowindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit pasajerowindow(QWidget *parent = nullptr);
    ~pasajerowindow();

private:
    Ui::pasajerowindow *ui;
};

#endif // PASAJEROWINDOW_H
