#include <iostream>
#include "empleado.h"
#include "empresa.h"
#include "fecha.h"

using namespace std;

int main()
{


    fecha f1;
    empresa Pear (78988946, "Pear");

    Pear.setEmpleados(4,logistica);
    Pear.aumentarSueldo(logistica);




    return 0;
}
