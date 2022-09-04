#include <iostream>
using namespace std;
int main() {
	char sexo;
	int edad,pago;
	cout << "Ingrese su sexo: ";
	cin >> sexo;
	cout << "Ingrese su edad: ";
	cin >> edad;
	sexo = toupper(sexo);
	//sexo == 'M';hombres
	//sexo == 'F';mujeres

	((sexo == 'M') && (edad < 25)) && (pago = 1000);
	((sexo == 'M') && (edad >= 25)) && (pago = 700);
	((sexo == 'F') && (edad < 21)) && (pago = 800);
	((sexo == 'F') && (edad >= 21)) && (pago = 500);

	cout << "Su pago correspondiente es: " << pago;

	return 0;
}