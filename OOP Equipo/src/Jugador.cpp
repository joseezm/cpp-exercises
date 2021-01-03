
#include "Jugador.h"
#include "iostream"
#include "string"

Jugador::Jugador()
{
    name="unnamed";
    number=0;
    posicion="suplente";
    agresividad=0;

}
    Jugador::Jugador( string n, int num, string pos, int a ){
        name=n;
        number=num;
        posicion=pos;
        agresividad=a;
    }


    void Jugador::setName(string n){
        name=n;
        }

    void Jugador::setNumber(int num){
        number=num;
        }
    void Jugador::setPosicion(string pos){
        posicion=pos;
        }

    void Jugador::setAgresividad(int a){
        agresividad=a;
        if (a>=5)
            cout << "Jugador agresivo";
        else
            cout << "Jugador pasivo";
        }

    void Jugador::print(){
        cout << "Nombre: " << name << endl;
        cout << "Numero: " << number << endl;
        cout << "Posicion: " << posicion << endl;
        if (agresividad>8)
            cout << "Cambiar Jugador" << endl;
        else
            cout << "No lo cambies" << endl;

        }
