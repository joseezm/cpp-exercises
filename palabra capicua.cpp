#include <iostream>

using namespace std;

int main()
{
int num=0, x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, mayor=10000;

for (int i = 999; i>99; i--){
    for (int j = 999; j>99; j--){
        num=i*j;
        x1=num/100000;
        x2=((num%100000)>10000)?((num%100000)/10000):0;
        x3=((num%10000)>1000)?((num%10000)/1000):0;
        x4=((num%1000)>100)?((num%1000)/100):0;
        x5=((num%100)>10)?((num%100)/10):0;
        x6=(num%10);


        if ((x1==x6)&&(x2==x5)&&(x3==x4)){
                        if (num>mayor)
                            mayor=num; }
    }
}
 cout << mayor;


    return 0;
}
