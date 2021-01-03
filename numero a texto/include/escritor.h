#ifndef ESCRITOR_H
#define ESCRITOR_H

#include <divisor.h>


class escritor : public divisor
{
    public:
        int n1,n2,n3;

        escritor();
        void setDigitos()
        {
            n3 = b1/100;
            n2 = (b1/10)%10;
            n1 = b1%10;
        }

        void escribirCientos()
        {

        //CENTENAS
          if(n3 == 1 && n2 == 0 && n1 == 0){
             cout<<"CIEN";
          }else if(n3 == 1){
             cout<<"CIENTO ";
          }else if(n3 == 2){
             cout<<"DOSCIENTOS ";
          }else if(n3 == 3){
             cout<<"TRESCIENTOS ";
          }else if(n3 == 4){
             cout<<"CUATROCIENTOS ";
          }else if(n3 == 5){
             cout<<"QUINIENTOS ";
          }else if(n3 == 6){
             cout<<"SEISCIENTOS ";
          }else if(n3 == 7){
             cout<<"SETECIENTOS ";
          }else if(n3 == 8){
             cout<<"OCHOCIENTOS ";
          }else if(n3 == 9){
             cout<<"NOVECIENTOS ";
          }
          //DECENAS
          if(n2 == 1 && n1 == 0){
             cout<<"DIEZ";
          }else if(n2 == 1 && n1 == 1){
             cout<<"ONCE";
          }else if(n2 == 1 && n1 == 2){
             cout<<"DOCE";
          }else if(n2 == 1 && n1 == 3){
             cout<<"TRECE";
          }else if(n2 == 1 && n1 == 4){
             cout<<"CATORCE";
          }else if(n2 == 1 && n1 == 5){
             cout<<"QUINCE";
          }else if(n2 == 1){
             cout<<"DIECI";}

          if(n2 == 2 && n1 == 0){
             cout<<"VEINTE";
          }else if(n2 == 2){
             cout<<"VEINTI";
          }else if(n2 == 3 && n1 == 0){
             cout<<"TREINTA";
          }else if(n2 == 3){
             cout<<"TREINTA Y ";
          }else if(n2 == 4 && n1 == 0){
             cout<<"CUARENTA";
          }else if(n2 == 4){
             cout<<"CUARENTA Y ";
          }else if(n2 == 5 && n1 == 0){
             cout<<"CINCUENTA";
          }else if(n2 == 5){
             cout<<"CINCUENTA Y ";
          }else if(n2 == 6 && n1 == 0){
             cout<<"SESENTA";
          }else if(n2 == 6){
             cout<<"SESENTA Y ";
          }else if(n2 == 7 && n1 == 0){
             cout<<"SETENTA";
          }else if(n2 == 7){
             cout<<"SETENTA Y ";
          }else if(n2 == 8 && n1 == 0){
             cout<<"OCHENTA";
          }else if(n2 == 8){
             cout<<"OCHENTA Y ";
          }else if(n2 == 9 && n1 == 0){
             cout<<"NOVENTA";
          }else if(n2 == 9){
             cout<<"NOVENTA Y ";
          }
          //UNIDADES
          if(n1 == 1 && n2 > 1){
             cout<<"UNO";
          }else if(n1 == 1 && n2 == 0){
             cout<<"UNO";
          }else if(n1 == 2 && n2 > 1){
             cout<<"DOS";
          }else if(n1 == 2 && n2 == 0){
             cout<<"DOS";
          }else if(n1 == 3 && n2 > 1){
             cout<<"TRES";
          }else if(n1 == 3 && n2 == 0){
             cout<<"TRES";
          }else if(n1 == 4 && n2 > 1){
             cout<<"CUATRO";
          }else if(n1 == 4 && n2 == 0){
             cout<<"CUATRO";
          }else if(n1 == 5 && n2 > 1){
             cout<<"CINCO";
          }else if(n1 == 5 && n2 == 0){
             cout<<"CINCO";
          }else if(n1 == 6){
             cout<<"SEIS";
          }else if(n1 == 7){
             cout<<"SIETE";
          }else if(n1 == 8){
             cout<<"OCHO";
          }else if(n1 == 9){
             cout<<"NUEVE";
          }

        }
};

#endif // ESCRITOR_H
