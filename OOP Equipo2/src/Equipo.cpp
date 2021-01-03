#include "Equipo.h"
#include "Jugador.h"

Equipo::Equipo()
{
    this -> name = "sinnombre";
    this -> n_jugadores = 0;
};

Equipo::Equipo(string name, int n_jugadores)
{
    this -> name = name;
    this -> n_jugadores = n_jugadores;
};

void Equipo::setName(string name) {    this->name = name; };
void Equipo::setNumJugadores(int n_jugadores) {    this->n_jugadores = n_jugadores; };

void Equipo::printEquipo()
{
    cout << name << endl;
    cout << n_jugadores << endl << endl;
};

void Equipo::armarEquipo()
{
    Jugador *jugadores = new Jugador[n_jugadores];

    for (int i=0; i < n_jugadores; i++){
        jugadores[i].setName("Jugador de e1");
        jugadores[i].setNum(i);
        jugadores[i].setAgresividad(i*2.5);
        jugadores[i].printJugador();
    }
    delete[] jugadores;
}
