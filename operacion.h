#ifndef OPERACION_H
#define OPERACION_H

#include <iostream>
#include <math.h>
using namespace std;

enum type {suma, resta, multiplicacion, division, potencia, modulo};

class Operacion{
private:
    double a;
    double b;
    type tipo;

public:
    Operacion(double a = 1, double b = 1, type tipo = multiplicacion);

    double getA();
    double getB();
    void setA(double a = 1);
    void setB(double b = 1);
    type getTipo();
    double getResultado();
};


#endif 