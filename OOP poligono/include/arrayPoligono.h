#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "poligono.h"

class arrayPoligono
{
    public:
        int tam;
        poligono **arr;
        poligono *pol;

        arrayPoligono(int t){
        tam=t;
        arr = new poligono*[tam];

        for (int j=0; j<tam; j++)
        {
             *arr[j] = *pol;
        }
        }

        ~arrayPoligono(){
            delete[]*arr;}

        void addPoligono (poligono *p){
        for(int i=0; i<tam; i++)
        {
            if (*arr[i] == *pol)
            *arr[i]==p;
        }

        }

        void deletePoligono (poligono *p){
        for (int h=0; h<tam; h++)
        {
            if (*arr[h]==p){
                *arr[h]=*pol;
            }
        }
        }

        void printArea(){
        for (int l=0; l<tam; l++){
            if (*arr[l] != pol)
                cout << *arr[l]->area() << endl
        }

        }
};

#endif // ARRAYPOLIGONO_H
