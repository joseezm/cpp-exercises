#ifndef EMPRESA_H
#define EMPRESA_H
#include "empleado.h"

class empresa
{
    private:
        string name;
        int ruc;
        int n_empleados;
        int nTotal_empleados;

    public:
        empresa(string, int, int);
        void setName(string);
        void setRuc(int);
        void aumentarEmpleados(int);
        void aumentarSalario(int depa);



};

#endif // EMPRESA_H
