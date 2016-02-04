#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
     double real,imaginary;
public:

    complex();
    complex operator +(complex r);
    complex operator -(complex r);
    complex operator *(complex &r);
    complex operator /(complex &r);
    complex operator ~();
    int operator ==(complex &r);
    friend class MainWindow;
};

#endif // COMPLEX_H
