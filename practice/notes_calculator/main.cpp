/*
 * ===========================================================================
 * Name        : Learning-cpp\practice\notes_calculator
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-17 20:57:18.348866
 * ===========================================================================
 */
#include <iostream>
#include <cstdlib>
#include "main.hpp"

using namespace std;

// templates
void read_students(student students[], int size);
void read_courses(student*);
void read_notes(course courses[], int size);

/*
 *
 */
int main(int argc, char const *argv[]) {
    int n_students = 0;
    cout << "Cantidad de alumnos: ";
    cin >> n_students;
    fflush(stdin);
    if (n_students > 0) {
        student students[n_students] = {};
        read_students(students, n_students);

        for (unsigned int i = 0; i < n_students; i++) {
            calculate_average(&students[i]);
        }

        for (unsigned int i = 0; i < n_students; i++) {
            show_information(&students[i]);
        }
    } else {
        cout << "No estan permitidos los numeros negativos" << endl;
    }

    return EXIT_SUCCESS;
}

/*
 *
 */
void read_students(student students[], int size) {
    for (unsigned int c_estudent = 0; c_estudent < size; c_estudent++) {
        cout << "Nombre: ";
        getline(cin, students[c_estudent].name);
        fflush(stdin);
        read_courses(&students[c_estudent]);
    }
}

/*
 *
 */
void read_courses(student* p_student) {
    cout << "Numero de cursos para " << p_student->name << ": ";
    cin >> p_student->n_courses;
    fflush(stdin);
    for (unsigned int c_courses; c_courses < p_student->n_courses; c_courses++) {
        cout << "Course name: ";
        getline(cin, p_student->courses[c_courses].name);
        fflush(stdin);

        cout << "Numero de notas para " << p_student->courses[c_courses].name << ": ";
        cin >> p_student->courses[c_courses].n_notes;
        fflush(stdin);
    }
}

/*
 *
 */
void read_notes(course courses[], int size) {
    // for (unsigned int c_notes; c_notes < size; c_notes++) {
    //     cout << "";
    //     cin >> courses;
    //     fflush(stdin);
    // }
}
