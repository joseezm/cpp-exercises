#include <iostream>

using namespace std;

bool isPotencia(int x){
    if ((x&(x-1))==0)
        return true;
    else
        return false;
}


int main()
{

int x;
cout << "numero: ";
cin >> x;

if(isPotencia(x))
    cout << "Si es potencia de 2";
else
    cout << "No es potencia de 2";

    return 0;
}
