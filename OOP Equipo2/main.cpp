#include <iostream>
#include "Equipo.h"
#include "Jugador.h"

using namespace std;

int main()
{
    Equipo e1("Real",11);
    e1.printEquipo();
    e1.armarEquipo();

    return 0;
}
