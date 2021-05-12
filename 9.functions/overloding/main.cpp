#include <iostream>
#include <cstdlib>

int addition(int a, int b) {
    return a + b;
}

float addition(float a, float b) {
    return a + b;
}

int main(int argc, char const *argv[]) {
    int sumInt = addition(125, 363);
    float sumFloat = addition(15.631f, 894.322f);

    std::cout << sumInt << std::endl;
    std::cout << sumFloat << std::endl;
    return EXIT_SUCCESS;
}
