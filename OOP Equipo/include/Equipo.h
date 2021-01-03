#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string.h>
#include "Jugador.h"

using namespace std;
class Equipo
{
    public:
        string nameEquipo;
        int numJugadores;
        Equipo();
        Equipo(string nameEquipo, int numJugadores);
        void setName(string nameEquipo);
        void setNumeroJugadores(int numJugadores);
        void print();

};


#endif
