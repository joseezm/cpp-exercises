#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>

using namespace std;


class Jugador
{
    private:
        string j_name, posicion;
        int n_jugador, agresividad;
    public:
        Jugador();
        Jugador(string, string, int, int);
        void setName(string);
        void setPosicion(string);
        void setNum(int);
        void setAgresividad(int);
        void printJugador();
};

#endif // JUGADOR_H
