#include <iostream>
#include <cstdlib>

int max(int a, int b) {
	return a > b ? a : b;
}

using namespace std;

int main() {
	int a, b;
	cout << "Ingrese el valor de a: ";
	cin >> a;
	fflush(stdin);
	cout << "Ingrese el valor de b: ";
	cin >> b;
	fflush(stdin);
	int mayor = max(a, b);
	cout << mayor << " es el numero mayor" << endl;
	return EXIT_SUCCESS;
}
