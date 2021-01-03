#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

class P{
    public:
    virtual int comparador(int a, int b);
};

class ascendente : public P{
    public:
    int comparador(int a, int b){return a>b;}
};

class descendente : public P{
    public:
    int comparador(int a, int b){return a<b;}
};


void burbujo(int a[],int n, P *p){
    int aux = 0;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n-1 ; j++){
        if(p->comparador(a[j],a[j+1])){
          aux = a[j];
            a[j] = a[j+1];
            a[j+1] = aux;
        }
      }
    }
}

/****************************************************/

bool asc (int a, int b){ return a>b;}
bool desc (int a, int b){ return a<b;}

void bubble(int a[],int n, bool (*fun)(int,int)){
    int aux = 0;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n-1 ; j++){
        if(fun(a[j],a[j+1])){
          aux = a[j];
            a[j] = a[j+1];
            a[j+1] = aux;
        }
      }
    }
}
/****************************************************/

class fAsc{
  public:
  inline bool operator()(int a, int b){return a>b;}
};

class fDesc{
  public:
  inline bool operator()(int a, int b){return a<b;}
};

void burbusort(int a[],int n, fAsc x){
    int aux = 0;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n-1 ; j++){
        if(x(a[j],a[j+1])){
          aux = a[j];
            a[j] = a[j+1];
            a[j+1] = aux;
        }
      }
    }
}
/****************************************************/
void imprimir(int a[], int n)
{
    for (int i = 0; i < n; i++){
      cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t = 80000;
    int arr[t];
    int i=0;


    while(i<=t){
      arr[i]=(rand()%1000) + 1;
      i++;
    }
    unsigned t1,t0,t2,t3,t4,t5;
    double time,time1,time2;


    ascendente a;
    descendente d;
    P *p =&a;

    t0=clock();
    burbujo(arr,t,p);
    t1=clock();

    time=(double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Tiempo Polimorfismo: " << time << endl;


    i=0;
    while(i<=t){
      arr[i]=(rand()%1000) + 1;
      i++;
    }

    bool (*pf)(int,int);
    pf = asc;

    t2= clock();
    bubble(arr,t,pf);
    t3=clock();

    time1=(double(t3-t2)/CLOCKS_PER_SEC);
    cout << "Tiempo Ptro a Func: " << time1 << endl;


    i=0;
    while(i<=t){
      arr[i]=(rand()%1000) + 1;
      i++;
    }



    fAsc asc;
    fDesc desc;

    t4=clock();
    burbusort(arr,t,asc);
    t5=clock();

    time2=(double(t5-t4)/CLOCKS_PER_SEC);
    cout << "Tiempo Functor: " << time2 << endl;



    return 0;
}
