#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include "fecha.h"


using namespace std;

class empleado
{
    private:
        string name;
        int salario;
        fecha f_ingreso;
        enum oficinas{Logistica, Almacen, RecursosHumanos}dep1;


    public:
        empleado(string, int, int, int, int);

        void setName(string);
        void setSalario(int);
        void depaEmpleado(oficinas dep1);
        void printEmpleado();

};

#endif // EMPLEADO_H
