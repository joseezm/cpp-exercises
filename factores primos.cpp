#include <iostream>

using namespace std;

bool esPrimo (int x){
    int y=2;
    int contador=0;
    if (x>2){
        for (; y<x; y=y+1){
            if ((x%y)==0)
                contador=contador+1; }
    }
    if (contador==0)
        return true;

    else
        return false;
}

int main()
{
long long x=13195,i=2,fact=0;

 for (;i<x;i++){
    if (x%i==0){
        fact=x/i;
        if (esPrimo(fact))
            cout << fact << endl;


    }

 }
    return 0;
}
