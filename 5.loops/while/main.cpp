#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    uint counter = 1;
    while (counter <= 10) {
        cout << "Iteracion while " << counter << endl;
        counter++;
    }
    return EXIT_SUCCESS;
}
