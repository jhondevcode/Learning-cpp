/**
 * Un puntero no es mas que la direccion de un valor en la memoria
 **/

#include <iostream>
#include <cstdlib>

/**
 * main: the main function
 **/
int main() {
	int number;
	std::cout << "Ingrese un numero: ";
	std::cin >> number;
	fflush(stdin);
	/* este es un puntero */
	int *address = &number;
	std::cout << "La direccion en memoria de \"" << number << "\" es: \"" << address << "\" " << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
