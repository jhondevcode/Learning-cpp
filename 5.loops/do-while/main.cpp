#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    unsigned int do_counter = 1;
    do {
        cout << "Iteracion do-while " << do_counter << endl;
        do_counter++;
    } while (do_counter <= 10);
    return EXIT_SUCCESS;
}
