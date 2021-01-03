#include <iostream>

using namespace std;

int main()
{
    int i=0,suma=0;
    for (;i<1000;i++){
        if (((i%3)==0) || ((i%5)==0))
            suma=suma+i;
    }
    cout << suma;
    return 0;
}
