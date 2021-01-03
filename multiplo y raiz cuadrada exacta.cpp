#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, res;
    float x;

    cout << "Número: ";
    cin >> n;
    x=sqrt(n);
       if (x-int(x)!=0){
            cout << ">>>>No tiene raiz cuadrada exacta";
    }
    else {
        x=sqrt(n);
        cout << ">>>>Si tiene raiz cuadrada exacta" << endl;
        if (int(x)%2==0)
            cout << "---->Si es multiplo";
        else
            cout << "---->No es multiplo";

    }

    return 0;
}
