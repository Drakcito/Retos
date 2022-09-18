#include <iostream>
using namespace std;
int main() {
	int n;
	char caracter;
	do {
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0 && n >= 10);
	cout << "Ingrese caracter: ";
	cin >> caracter;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n+1-i; j++) {
			cout << caracter;
		}
		cout << "\n";
	}

	return 0;
}