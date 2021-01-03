#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <poligono.h>


class rectangulo : public poligono
{
    public:
        rectangulo(int largo, int altura){
        this -> largo = largo;
        this -> altura = altura;
        }

        void area (){
        cout << (largo*altura) ;
        }
};

#endif // RECTANGULO_H
