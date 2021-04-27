#include <iostream>
#include <cstdlib>

void get_notes();
void show_notes();

using namespace std;

int n_notes, *p_notes;

int main() {
	get_notes();
	show_notes();

	// liberando la memoria
	cout << "Limpiando la memoria..." << endl;
	delete[] p_notes;
	cout << "Memoria limpiada :)" << endl;

	system("pause");
	return EXIT_SUCCESS;
}

void get_notes() {
	cout << "Ingrese la cantidad de notas: ";
	cin >> n_notes;
	p_notes = new int[n_notes];
	for (int i = 0; i < n_notes; i++) {
		cout << "[" << i + 1 << "] Ingrese una nota : ";
		cin >> p_notes[i];
	}
}

void show_notes() {
	cout << "\nMostrando notas del ususario" << endl;
	for (int i = 0; i < n_notes; i++) {
		cout << p_notes[i] << endl;
	}
}
