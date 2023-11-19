#include <iostream>
#include "operacion.h"
using namespace std;

int main(int argc, char * argv[])
{
    char tipo;
    type t;
    double a, b;
    cout << "\t> ";
    cin >> a >> tipo >> b;
    while(tipo != 'q'){
        switch(tipo){
            case '+':
                t = suma;
                break;
            case '-':
                t = resta;
                break;
            case '*':
                t = multiplicacion;
                break;
            case '/':
                t = division;
                break;
            case '^':
                t = potencia;
                break;
        }
        Operacion operacion(a,b,t);
        cout << "\t= " << operacion.getResultado() << endl;
        cout << "\t> ";
        cin >> a >> tipo >> b;
    }

    return 0;
};