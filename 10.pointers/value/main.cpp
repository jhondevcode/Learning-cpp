#include <iostream>
#include <cstdlib>

int main() {
	int number;
	int *dir_number;

	std::cout << "Ingrese un numero: ";
	std::cin >> number;
	fflush(stdin);
	dir_number = &number;

	if (*dir_number % 2 == 0) {
		std::cout << "El numero " << *dir_number << " es par" << std::endl;
	} else {
		std::cout << "El numero " << *dir_number << " no es par" << std::endl;
	}

	std::cout << "Posicion en memoria: " << dir_number << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}
