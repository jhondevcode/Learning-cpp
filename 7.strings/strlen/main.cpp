#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
	char word[64];
	std::cout << "Ingresa una cadena: ";
	std::cin.getline(word, 64, '\n');
	int digits = strlen(word);
	std::cout << "La cadena tiene " << digits << " caracteres" << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
