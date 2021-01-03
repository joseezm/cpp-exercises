#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>

using namespace std;

class Equipo
{
    private:
    string name;
    int n_jugadores;


    public:
        Equipo();
        Equipo(string, int );
        void setName (string );
        void setNumJugadores(int);
        void printEquipo();
        void armarEquipo();




};

#endif // EQUIPO_H
