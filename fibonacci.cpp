#include <iostream>

using namespace std;

int main()
{
    int x=0,fibo=0,y=1,suma=0,i=0;

    while(fibo<4000000){
        fibo=x+y;

        if (fibo%2==0)
            suma=suma+fibo;

        if (x<y)
            x=fibo;
        else
            y=fibo;


    }

    cout << suma;
}
