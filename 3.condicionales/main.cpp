#include <iostream>
#include <cstdlib>

using namespace std;

/* main function */
int main(int argc, char const *argv[]) {
    unsigned int age = 22;
    if (age >= 18) {
        cout << "Eres mayor de edad" << endl;
        if (age == 65) {
            cout << "Ya puedes recibir una pension" << endl;
        } else if (age >= 60 && age < 65) {
            cout << "Pronto recibiras tu pension" << endl;
        } else {
            cout << "Usted no califica para recibir una pension" << endl;
        }
    } else {
        cout << "Eres menor de edad" << endl;
    }
    return EXIT_SUCESS;
}
