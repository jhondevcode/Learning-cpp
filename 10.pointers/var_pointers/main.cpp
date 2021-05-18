/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\var_pointers
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-17 20:01:50.625847
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    char a = 'A';
    char* a_position = &a;

    short var_short = 5612;
    short* var_short_position = &var_short;

    int age = 22;
    int* age_position = &age;

    float pi = 3.1416f;
    float* pi_position = &pi;

    double sun_eart = 185000000.12563d;
    double* sun_eart_position = &sun_eart;

    cout << "Age               : " << age << endl;
    cout << "Age position      : " << age_position << endl;
    cout << "Pi                : " << pi << endl;
    cout << "Pi position       : " << pi_position << endl;
    cout << "Sun eart          : " << sun_eart << endl;
    cout << "sun eart position : " << sun_eart_position << endl;

    cout << "Char a            : " << a << endl;
    cout << "Char a position   : " << a_position << endl;
    cout << "short             : " << var_short << endl;
    cout << "Short position    : " << var_short_position << endl;

    system("pause");
    return EXIT_SUCCESS;
}
