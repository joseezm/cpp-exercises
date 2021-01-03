#include "Jugador.h"
#include <stdlib.h>

Jugador::Jugador()
{
   j_name="sinnombre";
   posicion="sinposicion";
   n_jugador=00;
   agresividad=00;
}

Jugador::Jugador(string j_name, string posicion, int n_jugador, int agresividad)
{
   this->j_name=j_name;
   this->posicion=posicion;
   this->n_jugador=n_jugador;
   this->agresividad=agresividad;
}

void Jugador::setName(string j_name) {this->j_name=j_name;}
void Jugador::setPosicion(string posicion) {this->posicion=posicion;}
void Jugador::setNum(int n_jugador) {this->n_jugador=n_jugador;}
void Jugador::setAgresividad(int agresividad) {this->agresividad=agresividad;}

void Jugador::printJugador()
{
    cout << j_name << endl;
    cout << posicion << endl;
    cout << n_jugador << endl;
    cout << agresividad << endl << endl;
}
