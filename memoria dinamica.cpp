#include <iostream>
#include "integuerwrapper.h"
#include "integuer.h"

using namespace std;

int *getfive(){
    int *x= new int;
    *x=5;
    return x;}

int main()
{
 integuerwrapper arr(2);
 arr.data[0] = 4;
 arr.data[1] = 1;


    return 0;
}
