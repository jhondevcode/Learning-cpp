#include <iostream>
#include <cstdlib>

int main() {
	int acumulador = 0;
	for (;;) {
		int value = 0;
		std::cout << "Ingrese un valor: ";
		std::cin >> value;
		if (value < 0) {
			break;
		}
		acumulador += value;
	}
	std::cout << "El valor total del acumulador es: " << acumulador << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
