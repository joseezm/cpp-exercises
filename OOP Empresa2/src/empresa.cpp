#include "empresa.h"

empresa::empresa(string name, int ruc)
{
    this -> name=name;
    this ->ruc=ruc;
    this->n_empleados=n_empleados;
};

void empresa::setName(string name) {this->name=name;};

void empresa::setRuc(int ruc) {this->ruc=ruc;};

void empresa::aumentarEmpleados(int n_empleados)
{
     for (int i=nTotal_empleados; i < (nTotal_empleados + n_empleados); i++){
        cout << "Ingresa nombre del empleado" << i << endl;
        cin >> empleados[i].name << endl;
        empleados[i].setName(empleados[i].name);
        cout << "Ingresa el salario del empleado" << i << endl;
        cin >> empleados[i].salario << endl;
        empleados[i].setSalario(empleadosi].salario);
        cout << "Ingresa dia de ingreso del empleado" << i << endl;
        cin >> empleados.f_ingreso.dia << endl;
        cout << "Ingresa mes de ingreso del empleado" << i << endl;
        cin >> empleados.f_ingreso.mes << endl;
        cout << "Ingresa año de ingreso del empleado" << i << endl;
        cin >> empleados.f_ingreso.anio << endl;
        empleados[i].f_ingreso.verificador();
        cout << "Ingresa el numero de departamento del empleado" << i << " (0=Logistica 1=Almacen 2=Recursos Humanos )" endl;
        cin >> depa << endl;
        empleados[i].depaEmpleado(&depa);}
        nTotal_empleados+=n_empleados;

    }
void empresa::aumentarSalario(int depa)
{
    for (int j=0; j<nTotal_empleados;j++)
    {
        if (empleados[j].dep1 == depa )
        {
           empleados[j].salario+=(empleados[j].salario*(0.1));
        }
    }
};

