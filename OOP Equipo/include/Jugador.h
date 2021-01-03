#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string.h>
#include "Equipo.h"

using namespace std;
class Jugador
{
    public:
        string name, posicion;
        int number, agresividad;

        Jugador();
        Jugador(string name, int number, string posicion, int agresividad);

        void setName(string n);
        void setNumber(int num);
        void setPosicion(string pos);
        void setAgresividad(int a);

        void print();

};

#endif
