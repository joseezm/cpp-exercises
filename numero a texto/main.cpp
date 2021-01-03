#include <iostream>
#include "divisor.h"
#include "escritor.h"

using namespace std;

int main()
{
    divisor num1;
    num1.getNumero();
    num1.numeroDigitos();
    num1.setBloques();

    if(num1.nDigitos>9)
    {
        num1.setDigitos(num1.b4);
        num1.escribirCientos();
        cout <<" MIL ";
        num1.setDigitos(num1.b3);
        num1.escribirCientos();
        cout <<" MILLONES ";
        num1.setDigitos(num1.b2);
        num1.escribirCientos();
        cout <<" MIL ";
        num1.setDigitos(num1.b1);
        num1.nDigitos=3;
        num1.escribirCientos();
    }

    else if((num1.nDigitos>6) &&  (num1.nDigitos<10))
    {
        num1.setDigitos(num1.b3);
        num1.escribirCientos();
        cout <<" MILLONES ";
        num1.setDigitos(num1.b2);
        num1.escribirCientos();
        cout <<" MIL ";
        num1.setDigitos(num1.b1);
        num1.nDigitos=3;
        num1.escribirCientos();
    }

    else if((num1.nDigitos>3) &&  (num1.nDigitos<7))
    {
        num1.setDigitos(num1.b2);
        num1.escribirCientos();
        cout <<" MIL ";
        num1.setDigitos(num1.b1);
        num1.nDigitos=3;
        num1.escribirCientos();
    }

    else if(num1.nDigitos<4)
    {
        num1.setDigitos(num1.b1);
        num1.escribirCientos();
    }


    return 0;
}
