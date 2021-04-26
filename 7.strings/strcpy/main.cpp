#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
	char name[] = "Cadena de ejemplo";
	char new_name[50];
	strcpy(new_name, name);
	std::cout << name << std::endl;
	std::cout << new_name << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
