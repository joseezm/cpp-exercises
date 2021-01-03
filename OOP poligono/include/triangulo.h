#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>
#include <poligono.h>

using namespace std;

class triangulo : public poligono
{
    public:
        triangulo(int largo, int altura){
        this -> largo = largo;
        this -> altura = altura;
        }

        void area (){
        cout << (largo*altura)/2 ;
        }
};

#endif // TRIANGULO_H
