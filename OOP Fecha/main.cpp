#include <iostream>

#include "fecha.h"
using namespace std;

int main()
{
    fecha f1(25,11,2017);
    f1.sumarDias(8);
    f1.printFecha();
    return 0;
}
