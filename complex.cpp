#include "complex.h"

complex::complex()
{
    real=1;
    imaginary=1;
}

complex  complex :: operator +(complex r)
{
    complex temp;
    temp.real=real+r.real;
    temp.imaginary=imaginary + r.imaginary;
    return temp;
}

complex  complex :: operator -(complex r)
{
    complex temp;
    temp.real=real-r.real;
    temp.imaginary=imaginary - r.imaginary;
    return temp;
}

int complex :: operator ==(complex &r)
{
    if(r.real==real && r.imaginary==imaginary)
        return 1;
    else
        return 0;
}
complex complex :: operator ~()
{
    complex temp;
    temp.real=real;
    temp.imaginary= imaginary - 2*imaginary;
    return temp;
}


complex complex :: operator *(complex &r)
{
    complex temp;
    temp.real=real*r.real - imaginary*r.imaginary;
    temp.imaginary=real*r.imaginary + imaginary*r.real;
    return temp;
}

complex complex :: operator /(complex  &r)
{
    complex temp;
    temp.real=(real*r.real + imaginary*r.imaginary)/(r.real*r.real + r.imaginary*r.imaginary);
    temp.imaginary=(imaginary*r.real - real*r.imaginary)/(r.real*r.real + r.imaginary*r.imaginary);
    return temp;
}


