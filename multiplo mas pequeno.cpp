#include <iostream>

using namespace std;

int main()
{
int x=2520,i=1,contador=0,res=0;
bool z=true, y=true;

while (z){
    if (contador==20){
        z=false;
        res=x;}
    if (contador<20)
        contador = 0;
    x++;
for(i=1;i<21;i++){
if (x%i==0)
    contador++;
    }
}
cout << "el menor es: " <<res;

    return 0;
}
