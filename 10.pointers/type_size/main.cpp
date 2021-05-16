/*
 * ===========================================================================
 * Name        : 10.pointers/type_size
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Sizes of data types
 * Created on  : 2021-05-15 20:32:55.461596
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    bool             b;
    char             c;
    int              n;
    long             l;
    long long       ll;
    float            f;
    double           d;
    long double     ld;
    cout << "sizeof a bool        = " << sizeof b << " byte, or " << sizeof(b) * 4 << " bits" << endl;
    cout << "sizeof a char        = " << sizeof c << " byte, or " << sizeof(c) * 4 << " bits" << endl;
    cout << "sizeof an int        = " << sizeof n << " byte, or " << sizeof(n) * 4 << " bits" << endl;
    cout << "sizeof a long        = " << sizeof l << " byte, or " << sizeof(l) * 4 << " bits" << endl;
    cout << "sizeof a long long   = " << sizeof ll<< " byte, or " << sizeof(ll) * 4 << " bits" << endl;
    cout << "sizeof a float       = " << sizeof f << " byte, or " << sizeof(f) * 4 << " bits" << endl;
    cout << "sizeof a double      = " << sizeof d << " byte, or " << sizeof(d) * 4 << " bits" << endl;

    // The size of this type of data in a 64-bit architecture varies according to the compiler that is
    // used, with the gnu compiler the type has a size of 16 bytes and with that of microsoft it has a
    // size of 8 bytes.
    cout << "sizeof a long double = " << sizeof ld<< " byte, or " << sizeof(ld) * 4 << " bits" << endl;
    system("pause");
    return EXIT_SUCCESS;
}
