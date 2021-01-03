#include <iostream>
#include <string>
#include "Jugador.h"
#include "Equipo.h"


using namespace std;

int main()
{
    Jugador j1;
    Jugador j2("victor", 10, "del", 5);
    Jugador j3("manuel", 11, "def", 9);


    Equipo equipo1;
    Equipo equipo2("Sport Chapita", 11);
    Equipo equipo3("Divino Niño Ronaldinho", 11);
    Equipo equipo4("Ballenitas", 11);

    equipo2.print();

    return 0;
}
