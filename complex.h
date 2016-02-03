#ifndef COMPLEX_H
#define COMPLEX_H

#include <QWidget>

namespace Ui {
class complex;
}

class complex : public QWidget
{
    Q_OBJECT

public:
    explicit complex(QWidget *parent = 0);
    ~complex();
int real,imaginary;
    complex *operator +(complex &r);
    complex *operator =(complex &r );
private:
    Ui::complex *ui;
};

#endif // COMPLEX_H
