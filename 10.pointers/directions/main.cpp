/*
 * ===========================================================================
 * Name        : 10.pointers/directions
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Memory directions in c++
 * Created on  : 2021-05-15 21:51:40.120085
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    int start;
    int n; long l; long long ll;
    float f; double d; long double ld;
    int end;
    // set output to hex mode
    cout.setf(ios::hex);
    cout.unsetf(ios::dec);
    // output the address of each variable
    // in order to get an idea of how variables are
    // laid out in memory
    cout << "--- = " << &start << endl;
    cout << "&n = " << &n << endl;
    cout << "&l = " << &l << endl;
    cout << "&ll = " << &ll << endl;
    cout << "&f = " << &f << endl;
    cout << "&d = " << &d << endl;
    cout << "&ld = " << &ld << endl;
    cout << "--- = " << &end << endl;
    system("pause");
    return EXIT_SUCCESS;
}
