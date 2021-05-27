/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\memory_leak
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-26 17:28:30.066057
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    int* a = new int;
    *a = 1789;
    cout << *a << endl;
    a = new int;    // memory leak
    *a = 23691;
    cout << *a << endl;
    delete a;
    system("pause");
    return EXIT_SUCCESS;
}
