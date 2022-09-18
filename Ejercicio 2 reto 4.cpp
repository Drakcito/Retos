#include<iostream>
using namespace std;//Grupo: José Calderón y Pedro Nanfuñay.
int main() {
	int tiempo, total=0;
	char categoria;

	cout << "Ingrese la categoria del trabajador (De A a E): ";
	cin >> categoria;
	cout << "Ingrese las horas trabajadas: " << endl;
	cin >> tiempo;
	categoria = toupper(categoria);
	if (categoria == 'A') {
		total = tiempo * 30;
	}
	else if (categoria == 'B'){
		total = tiempo * 35;
	}
	else if (categoria == 'C') {
		total= tiempo * 40;
	}
	else if (categoria == 'D') {
		total=tiempo * 45;
	}
	else if (categoria == 'E') {
		total = tiempo * 50;
	}
	cout << "El total a pagar es $" << total << endl;
	return 0;
}