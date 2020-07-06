#ifndef VENTASWINDOW_H
#define VENTASWINDOW_H

#include <QMainWindow>

namespace Ui {
class ventaswindow;
}

class ventaswindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventaswindow(QWidget *parent = nullptr);
    ~ventaswindow();

private:
    Ui::ventaswindow *ui;
};

#endif // VENTASWINDOW_H
