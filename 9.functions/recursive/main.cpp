#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int);

int main() {
	int number = 0;
	std::cout << "Ingrese un numero entero positivo: ";
	std::cin >> number;
	if (number >= 0) {
		std::cout << "El factorial de " << number << " es: " << factorial(number) <<std::endl;
	} else {
		std::cout << "No se puede operar con negativos" << std::endl;
	}
	system("pause");
	return EXIT_SUCCESS;;
}

int factorial(int n) {
	if (n == 0) {
		n = 1;
	} else {
		n *= factorial(n - 1);
	}
	return n;
}
