#include <iostream>

using namespace std;

bool bisiesto (int x) {
    if (x%4==0){
            if ((x%100==0)||(x%400==0))
                return true;
            else
                return false; }
    else
        return false;
}

int main()
{
int x;
cout << "Anho: ";
cin >> x;

if (bisiesto(x))
    cout << "Bisiesto";
else
    cout << "No bisiesto";

    return 0;
}
