#ifndef EMPRESA_H
#define EMPRESA_H
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "fecha.h"
#include "empleado.h"

using namespace std;

class empresa
{
    public:
        int ruc, n_empleados;
        string name;
        empleado emp[];
        enum departamentos {logistica, almacen, recursoshumanos};



    Empresa(int r, string n){
    ruc=r;
    name=n;
    n_empleados=0;
    }

    void print(){
        cout << "Nombre: " << name << endl;
        cout << "RUC: " << ruc  << endl;
        cout << "N empleados: " << n_empleados  << endl;

        }
    void  setEmpleados(int n_emp, departamentos depart){
    n_empleados+=n_emp;
    for (int i=0; i <= n_emp; i++)
        emp[i].setDepartamento(depart)

    }

    void aumentarSueldo(departamentos depa){
        for (int j=0; j<=n_empleados; j++){
            if (emp[j].dep1 == depa)
                emp[j].salario += (emp[j].salario)*(0.1)}
        }

};

#endif // EMPRESA_H
