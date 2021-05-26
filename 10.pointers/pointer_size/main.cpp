/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\pointer_size
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-26 16:49:04.233599
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    int var_a = 15;
    int* p_var_a = &var_a;
    char initial = 'J';
    char* p_initial = &initial;
    double pi = 3.1416D;
    double* p_pi = &pi;

    cout << "type: int, value: " << var_a << ", pointer: " << p_var_a << ", pointer size: " << sizeof(p_var_a) << endl;
    cout << "type: char, value: " << initial << ", pointer: " << p_initial << ", pointer size: " << sizeof(p_initial) << endl;
    cout << "type: double, value: " << pi << ", pointer: " << p_pi << ", pointer size: " << sizeof(p_pi) << endl;

    return EXIT_SUCCESS;
}
