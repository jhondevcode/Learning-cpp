#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
	char name[] = "Cadena de ejemplo";
	strrev(name);
	std::cout << name << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
