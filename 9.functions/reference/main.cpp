#include <iostream>
#include <cstdlib>

void show_val(int &a, int &b);

int main() {
	int a = 5, b = 6;
	show_val(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}

void show_val(int &a, int &b) {
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a = a * a;
	b = b * b;
}
