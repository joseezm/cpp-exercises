#include <iostream>

using namespace std;

int isEnesimo(int n){
    int i=3,contador=1,f,j=2;
    while (contador<n){
            f=0;
        for (int j=2; j<=i/2;j++){
            if (i%j==0)
            f=1; }
        if (f==0)
            contador++;
        i++;
    }
    return i-1;
}

int main()
{

int n;
cout << "Posicion: ";
cin >> n;

cout << "El primo en la posicion " << n << " es " << (isEnesimo(n));


    return 0;
}
