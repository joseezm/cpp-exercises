#include "Equipo.h"
#include "iostream"
#include "string"

Equipo::Equipo()
{
    nameEquipo="unnamed";
    numJugadores=0;

}
    Equipo::Equipo( string name, int num){
        nameEquipo=name;
        numJugadores=num;
    }


    void Equipo::setName(string name){
        nameEquipo=name;
        }

    void Equipo::setNumeroJugadores(int num){
        numJugadores=num;
        }


    void Equipo::print(){
        cout << "Nombre de Equipo: " << nameEquipo << endl;
        cout << "Numero de Jugadores: " << numJugadores << endl;
        }
