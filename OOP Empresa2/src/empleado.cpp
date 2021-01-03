#include "empleado.h"
#include "fecha.h"
#include <iostream>

using namespace std;

empleado::empleado(string name, int salario, int d, int m, int a)
{
    this -> name=name;
    this -> salario=salario;
    f_ingreso(d,m,a);
    f_ingreso.verificarFecha();

};

void empleado::printEmpleado()
{
    cout << "Nombre: " << name << endl;
    cout << "Salario: " << salario << endl;
    f_ingreso.printFecha();
};

void empleado::depaEmpleado(oficinas dep1)
{
    this ->dep1=dep1;
}
