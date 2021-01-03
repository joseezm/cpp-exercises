#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char aux[30]="";
    char str1[]="hola";
    char str2[]="tarea";
    char str3[]="facebook";
    char str4[]="bye";

    strcpy(aux, str4);
    strcpy(str4, str1);
    strcpy(str1, aux);
    strcpy(aux, str3);
    strcpy(str3, str2);
    strcpy(str2, aux);


    printf("%s\n%s\n%s\n%s\n",str1,str2,str3,str4);

    return 0;
}
