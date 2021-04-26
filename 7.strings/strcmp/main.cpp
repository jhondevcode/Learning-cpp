#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
	char cad01[] = "Hello";
	char cad02[] = "Hello";
	if (strcmp(cad01, cad02) == 0) {
		std::cout << "Las cadenas son iguales" << std::endl;
	} else {
		std::cout << "Las cadenas son diferentes" << std::endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}
