#include<iostream>
using namespace std;//Grupo: José Calderón y Pedro Nanfuñay.
int main() {
	float promedio, faltas;

	cout << "Ingrese el promedio ponderado: " << endl;
	cin >> promedio;
	cout << "Ingrese la cantidad de faltas: " << endl;
	cin >> faltas;
	if (promedio >= 15 && faltas == 0) {
		cout << "Si se le otorga la beca";
	}
	else {
		cout << "No se le otorga la beca";
	}
	return 0;
}