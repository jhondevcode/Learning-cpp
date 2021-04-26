#include <iostream>
#include <cstdlib>

using namespace std;

struct car {
	char model[16];
	unsigned int year;
	char color[16];
	unsigned int km;
};

struct people {
	char name[64];
	unsigned int age;
	unsigned long dni;
	struct car vehicle;
};
typedef people people;

int main() {
	people wil;

	cout << "=====>Persona<=====" << endl;
	cout << "Nombre: ";
	cin.getline(wil.name, 64, '\n');
	fflush(stdin);
	cout << "Edad: ";
	cin >> wil.age;
	fflush(stdin);
	cout << "Dni: ";
	cin >> wil.dni;
	fflush(stdin);
	cout << "=====>Vehiculo<=====" << endl;
	cout << "Modelo: ";
	cin.getline(wil.vehicle.model, 16);
	fflush(stdin);
	cout << "Año: ";
	cin >> wil.vehicle.year;
	fflush(stdin);
	cout << "Color: ";
	cin.getline(wil.vehicle.color, 16);
	fflush(stdin);
	cout << "Kilometros: ";
	cin >> wil.vehicle.km;
	fflush(stdin);

	cout << wil.name << endl;
	cout << wil.age << endl;
	cout << wil.dni << endl;
	cout << wil.vehicle.model << endl;
	cout << wil.vehicle.year << endl;
	cout << wil.vehicle.color << endl;
	cout << wil.vehicle.km << endl;

	system("pause");
	return EXIT_SUCCESS;
}
