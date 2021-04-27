#include <iostream>
#include <cstdlib>

typedef struct {
	char name[64];
	unsigned int age;
} people;

void get_dates(people &p);

void show_dates(people p);

int main() {
	people npeople;
	get_dates(npeople);
	show_dates(npeople);
	system("pause");
	return EXIT_SUCCESS;
}

void get_dates(people &p) {
	std::cout << "Nombre: ";
	std::cin.getline(p.name, 64, '\n');
	fflush(stdin);
	std::cout << "Edad: ";
	std::cin >> p.age;
	fflush(stdin);
}

void show_dates(people p) {
	std::cout << "Name: " << p.name << ", Age: " << p.age << std::endl;
}
