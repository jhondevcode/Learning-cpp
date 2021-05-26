/*
 * ===========================================================================
 * Name        : Learning-cpp\10.pointers\heap_mem
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-26 17:13:22.440421
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    int* a = new int;
    *a = 1853;
    cout << a << " = " << &a << " = " << *a << endl;
    cout << "cleaning the memory ..." << endl;
    delete a;       // freeing up used memory
    return EXIT_SUCCESS;
}
