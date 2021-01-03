#include <iostream>

using namespace std;

int main()
{
    int tam=3;
    int m[tam][tam]={{1,2,4},{6,7,2},{9,4,7}};
    int i, j, x;



    for (int i=0;i<tam;i++){
        for(int j =0; j<tam; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    	for (x = 0; x < (tam % 2) ? (tam / 2) + 1 : tam / 2 ; x++){

		for (i = j = x; j < (tam - x); j++)
			cout << m [i][j];

		for (j--, i++; i < (tam - x); i++)
			cout << m [i][j];

		for (i--, j--; j >= x; j--)
			cout << m [i][j];

		for (j++, i--; i > x; i--)
			cout << m [i][j];

    	}
    return 0;

}
