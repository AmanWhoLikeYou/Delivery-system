#ifndef MERCHANT_H
#define MERCHANT_H

#include <QWidget>
#include <QDebug>
#include "dish.h"
#include <QPixmap>

namespace Ui {
class Merchant;
}

class Merchant : public QWidget
{
    Q_OBJECT

public:
    explicit Merchant(QWidget *parent = nullptr);
    ~Merchant();

public slots:
    void addDish();

    void deleteDish();

private:
    Ui::Merchant *ui;
};

#endif // MERCHANT_H
