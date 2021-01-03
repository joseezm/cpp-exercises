#include <iostream>

using namespace std;

int suma=0;
int sumar(int m[], int n){

if (n==1)
    return m[0];

else
    return m[n-1] + sumar (m, n-1);


}
int main()
{

    int n=4;
    int m[n]={1,2,3,4};

    cout << sumar(m,n);


    return 0;
}
