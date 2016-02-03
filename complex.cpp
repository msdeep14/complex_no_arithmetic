#include "complex.h"
#include "ui_complex.h"

complex::complex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::complex)
{
    ui->setupUi(this);
}

complex::~complex()
{
    delete ui;
}

complex *complex :: operator +(complex &r)
{
    complex *temp;
    temp->real=real+r.real;
    temp->imaginary=imaginary + r.imaginary;
    return *temp;
}

complex *complex :: operator ==( complex &r)
{
    complex *temp;
    temp->real=r.real;
    temp->imaginary=r.imaginary;
    return *temp;
}
