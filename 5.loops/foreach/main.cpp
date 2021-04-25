#include <iostream>
#include <cstdlib>

int main() {
    for (int n :  {1, 2, 3, 4, 5, 6, 7, 8, 9}) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}