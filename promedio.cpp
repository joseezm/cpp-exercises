#include <iostream>

using namespace std;

int main()
{
    int num,x=0,mayor=0,menor,y=0;
    float nume,prom=0;
    cout <<"Ingresa un numero: ";
    cin >> num;
    nume=num;
    prom = 0;

    while (num>0){
        cin >> x;
        num=num-1;
        if (prom==0){
            mayor=x;
            menor=x;}

        prom=prom+x;

        mayor=x>mayor?x:mayor;
        menor=x<menor?x:menor;
    }
    prom=prom/nume;
    cout << "el mayor es: " << mayor << endl;
    cout << "el menor es: " << menor << endl;
    cout << " el promedio es: " << prom << endl;


    return 0;
}
