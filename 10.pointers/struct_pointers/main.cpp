/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\struct_pointers
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Pointers and structs
 * Created on  : 2021-05-17 20:26:56.675907
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

typedef struct people {
    char name[64];
    unsigned int age = 0;
    unsigned long dni = 0;
} people;

void show_dates(people* p);

using namespace std;

int main(int argc, char const *argv[]) {
    people p01;
    cout << "Name: ";
    cin.getline(p01.name, 64, '\n');
    fflush(stdin);
    cout << "Age: ";
    cin >> p01.age;
    fflush(stdin);
    cout << "Dni: ";
    cin >> p01.dni;
    fflush(stdin);
    cout << endl;
    people* people_pointer = &p01;
    people_pointer->age = 25;
    cout << "People adress : " << people_pointer << endl;
    cout << "Name adress   : " << &p01.name << endl;
    cout << "Age adress    : " << &p01.age << endl;
    cout << "Dni adress    : " << &p01.dni << endl;
    cout << endl;
    show_dates(people_pointer);
    system("pause");
    return EXIT_SUCCESS;
}

void show_dates(people* p) {
    cout << "Name : " << p->name << endl;
    cout << "Age  : " << p->age << endl;
    cout << "Dni  : " << p->dni << endl;
}
