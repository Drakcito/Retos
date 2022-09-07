//Reto Semana 3: Funciones
#include<iostream>
#include<cmath>
using namespace std;

float area_circulo(float radio) {
	float area;
	area = pow(radio, 2) * 3.14;
	return area;
}
float perimetro_cir(float radio) {
	float perimetro;
	perimetro = 2 * 3.14 * radio;
	return perimetro;
}

void main() {
	float radio;
	cout << "Ingrese el radio: ";
	cin>>radio;
	cout << "El area del circulo es: " << area_circulo(radio) << endl;
	cout << "El perimetro del circulo es: " << perimetro_cir(radio) << endl;
}