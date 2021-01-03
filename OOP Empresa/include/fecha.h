
#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;

class fecha
{
    public:
        int dia, mes, anio;

        fecha(int d, int m, int a){
            while (true){
                 if (m>=1 && m<=12){
                    if (d >= 1 && d<=31){
                            if (a % 4 == 0 && a%100 !=0){
                                if  (m==2 && d>=1 && d <=29)
                                    cout << d << "/" << m << "/" << a  << "   ";
                                else
                                    cout << "fecha incorrecta";
                                    break;}}
                            else {
                                if (m==2 && d>=1 && d <=28)
                                     cout << d << "/" << m << "/" << a  << "   ";
                                else
                                    cout << "fecha incorrecta";
                                    break;}}
                else
                    cout << "fecha incorrecta";
            }}
};

#endif
