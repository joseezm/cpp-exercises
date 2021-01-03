#include <iostream>

using namespace std;

bool isPrimo (int x){
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
  int x;
  cout << "Ingresa numero: ";
  cin >> x;

  if (isPrimo(x))
    cout << "Primo";
  else
    cout << "No primo";

    return 0;
}
