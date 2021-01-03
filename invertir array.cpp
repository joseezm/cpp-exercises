#include <iostream>

using namespace std;
void invertir(int m[], int n){
int aux;
int tam=n;
n=n-1;
for (int i=0;i<n; i++){
        aux = m[n];
        m[n]=m[i];
        m[i]=aux;
        n--;
        }

    for (int j=0; j<tam; j++)
        cout << m[j];

}
int main()
{

   int n=6;
    int m[n]={1,2,3,4,5,6};

    invertir(m,n);


    return 0;
}
