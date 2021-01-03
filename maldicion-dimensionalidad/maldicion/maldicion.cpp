#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <fstream>
#include <vector>

using namespace std;

vector <float> proms;

void maldicion(int n) {
	int totalPuntos = 1000;

	float** t;
	t = new float* [totalPuntos];
	for (int j = 0; j < totalPuntos; j++)
		t[j] = new float[n];

	srand(time(NULL));
	for (int i = 0; i < totalPuntos; ++i) {
		for (int j = 0; j < n; ++j) {
			float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			t[i][j] = r;
		}
	}

	float min = 0.0;
	float max = 0.0;

	for (int k = 0; k < n; ++k) {
		min = min + pow(t[0][k] - t[1][k], 2);
	}

	float prom = 0.0;
	int cont = 0;
	min = sqrt(min);
	max = min;

	for (int i = 0; i < totalPuntos; ++i) {
		for (int j = i + 1; j < totalPuntos; ++j) {
			float distancia = 0.0;
			for (int k = 0; k < n; ++k) {
				distancia = distancia + pow(t[i][k] - t[j][k], 2);
			}
			distancia = sqrt(distancia);
			cont++;
			prom = prom + distancia;
			if (distancia > max) {
				max = distancia;
			}
			else if (distancia < min) {
				min = distancia;
			}
		}
	}


	prom = prom / cont;

	proms.push_back(prom);
	   
	cout << "min   " << min << "	";
	cout << "max   " << max << "	";
	cout << "prom " << prom << "	";
	cout << endl;
}

int main()
{
	for (int i = 0; i < 5000; i++) {
		cout << "DIMENSION : " << i << "D" << endl;
		maldicion(i);
	}

	ofstream datos;
	datos.open("promedios.txt", ios::out);
	for (int i = 0; i < 10; i++) {
		datos << proms[i] << endl;
	}
	datos.close();

	return 0;
}