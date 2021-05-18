/*
 * This c ++ header contains types used for the example and functions to be able
 * to operate with the data types created in this header
 */

#include <iostream>

/* data types */
typedef struct {
    std::string name;               // course name
    unsigned int n_notes = 0;       // number of notes you have
    unsigned int max_courses = 8;   // maximum capacity of courses
    float notes[8] = {};            // notes store
    double final_note;              // final course average
} course;

typedef struct {
    std::string name;               // student name
    unsigned int n_courses = 0;     // number of courses the student takes
    course courses[8] = {};         // store of the courses that the student has
} student;

/* function templates */
void calculate_average(student*);
void average(course*);
void show_information(student*);

/*
 * This function is in charge of going through an arrangement of courses and then
 * calling the function that will calculate the final average of the student.
 */
void calculate_average(student* p_student) {
    if (p_student->n_courses > 0) {
        for (unsigned int i = 0; i < p_student->n_courses; i++) {
            average(&p_student->courses[i]);
        }
    }
}

/*
 * This function is in charge of going through the arrangement of course notes
 * and then obtaining the course average.
 */
void average(course* course) {
    if (course->n_notes > 0) {
        for (unsigned int i = 0; i < course->n_notes; i++) {
            course->final_note += course->notes[i] / (double) course->n_notes;
        }
    }
}

/*
 * This method is in charge of going through the list of students and then
 * showing a detailed record of the courses and their averages.
 */
void show_information(student* student) {
    if (student->n_courses > 0) {
        for (unsigned int i = 0; i < student->n_courses; i++) {
            std::cout << student->name << ": " << std::endl;
            std::cout << "    " << student->courses[i].name << ": " << student->courses[i].final_note << std::endl;
        }
    }
}
