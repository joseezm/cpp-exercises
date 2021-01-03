#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string.h>
#include "fecha.h"
#include "empresa.h"

using namespace std;

class empleado
{
    public:
        string name;
        int salario;
        enum departamentos {logistica, almacen, recursoshumanos};
        departamentos dep1;
        fecha ingreso;

        empleado(string n, int s ){
        name=n;
        salario=s;


        }

        void print(){
        cout << "Nombre" << name;
        cout << "Salario" <<salario;
        cout << "Departamento" << dep1 ;


        }

        void setDepartamento(departamentos depa){
        dep1=depa;
        }


};

#endif // EMPLEADO_H
