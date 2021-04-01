#include <iostream>
#include <cstdlib>

using namespace std;

void spaces() {
    for (uint space = 0; space < 20; space++) {
        cout << "-";
    }
    cout << "\n" << endl;
}

void loop_integer_array(int array[], uint lenght) {
    for (uint index = 0; index < lenght; index++) {
        cout << array[index] << endl;
    }
}

void loop_string_array(string array[], uint lenght) {
    for (uint index = 0; index < lenght; index++) {
        cout << array[index] << endl;
    }
}

int main() {
    string objects[10] = {
        "Pencil",
        "Computer",
        "Language",
        "Compiler",
        "Keyboard",
        "Touchscreen",
        "Logic unity",
        "Hard disk",
        "Screen",
        "Network"
    };
    cout << "Common objects" << endl;
    spaces();
    loop_string_array(objects, 10);

    cout << "\nArray numbers" << endl;
    int ages[5];
    ages[0] = 25;
    ages[1] = 65;
    ages[2] = 36;
    ages[3] = 15;
    ages[4] = 34;
    spaces();
    loop_integer_array(ages, 5);
    return EXIT_SUCCESS;
}
