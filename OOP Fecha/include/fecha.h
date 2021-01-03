#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;

class fecha
{
    private:
        int dia, mes, anio;
        bool verificador, verificadorBisiesto;

    public:
        fecha(int dia, int mes, int anio){
            this ->dia=dia;
            this -> mes=mes;
            this -> anio=anio;

            while (true)
            {
                 if (mes>=1 && mes<=12)
                 {
                    if (mes==2 || mes==4 || mes==6 || mes==9 || mes==11)
                    {
                        if (dia >= 1 && dia<=30)
                        {
                            if (anio % 4 == 0 ? ((anio%100==0 && anio%400==0)||anio%100!=0 ?true:false):false)
                            {
                                verificadorBisiesto=true;
                                if  (mes==2 && dia>=1 && dia <=29)
                                    verificador=true;
                                else
                                    verificador=false;

                                    break;
                            }
                            else
                            {
                                verificadorBisiesto=false;
                                if (mes==2 && dia>=1 && dia <=28)
                                     verificador=true;
                                else if (mes!=2)
                                    verificador=true;
                                else
                                    verificador=false;

                                break;
                            }
                        }
                        else
                            verificador=false;
                        break;
                    }
                        else
                        {
                            if (dia >= 1 && dia<=31)
                                verificador=true;
                            else
                                verificador=false;
                            break;
                        }
                }

                else
                    verificador=false;
            }
                if (verificador==false)
                    cout << "Fecha Incorrecta" << endl;
            };


        void setDia(int dia){ this -> dia=dia;};
        void setMes(int mes){ this -> mes=mes;};
        void setAnio(int anio){ this -> anio=anio;};



        void printFecha(){
            if (verificador==true)
                cout << dia << "/" << mes << "/" << anio << endl;
            else
                cout << "Fecha Incorrecta" << endl; };



        void bisiesto()
        {
            if (verificadorBisiesto)
                cout << "Es bisiesto" << endl;
            else
                cout << "No es bisiesto" << endl;
        };



        void sumarDias(int dias)
        {
          if (mes==4 || mes==6 || mes==9 || mes==11){
            if((30-dia)<dias){
                mes++;
                dia=(dia+dias)-30; }
          }
          else if (mes==2){
            if(verificadorBisiesto){
                if((29-dia)<dias){
                    mes++;
                    dia=(dia+dias)-29; }
            }
            else{
                if((28-dia)<dias){
                        mes++;
                        dia=(dia+dias)-28; }
                }
          }
          else if (mes==12){
            if((31-dia)<dias){
                        anio++;
                        mes=1;
                        dia=(dia+dias)-31; }
          }
          else
            if((31-dia)<dias){
                mes++;
                dia=(dia+dias)-31;}

        };

};

#endif // EMPLEADO_H
