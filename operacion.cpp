#include "operacion.h"

Operacion::Operacion(double a, double b, type tipo){
    this->a = a;
    this->b = b;
    this->tipo = tipo;
}

double Operacion::getA(){
    return this->a;
}

double Operacion::getB(){
    return this->b;
}

void Operacion::setA(double a){
    this->a = a;
}

void Operacion::setB(double b){
    this->b = b;
}

double Operacion::getResultado(){
    double resultado = 0;
    switch(tipo){
        case suma:
            resultado = this->a + this->b;
            break;
        case resta:
            resultado = this->a + this->b;
            break;
        case multiplicacion:
            resultado = this->a * this->b;
            break;
        case division:
            if(b != 0)
                resultado = this->a / this->b;
            break;
        case potencia:
            if(a == 1 || b == 1)
                resultado == a;
            else if(b == 1)
                resultado == 1;
            else
                resultado = pow(a,b);
            break;           
    }
}