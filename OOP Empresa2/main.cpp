#include <iostream>
#include "fecha.h"
#include "empleado.h"
#include "empresa.h"

using namespace std;

int main()
{
    empresa empresa1("Google",12345678,0);
    empresa1.aumentarEmpleados(5);
    empresa1.aumentarSalario(1);

    return 0;
}
