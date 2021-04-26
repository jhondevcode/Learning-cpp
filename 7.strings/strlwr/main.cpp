#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
	char cadena[64];
	std::cout << "Ingresa una cadena en mayuscula: ";
	std::cin.getline(cadena, 64, '\n');
	strlwr(cadena);
	std::cout << cadena << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
