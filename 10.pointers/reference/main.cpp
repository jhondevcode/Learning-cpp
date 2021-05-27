/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\reference
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-26 19:31:37.671560
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    int a = 15;
    int& b = a;
    b = 20;
    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << (&a == &b) << endl;
    return EXIT_SUCCESS;
}
