#include <iostream>

using namespace std;

class NotesBook {
private:
	string course_name;
public:
	void set_course_name(string name) {
		this->course_name = name;
	}
	string get_course_name() const {
		return this->course_name;
	}
	void show_message() const {
		cout << "Welcome to notes book for " << this->get_course_name() << endl;
	}
};

int main() {
	NotesBook course;
	string course_name;
	cout << "Enter the course name: ";
	fflush(stdout);
	getline(cin, course_name);
	fflush(stdin);
	course.set_course_name(course_name);
	course.show_message();
	cout << "The name of course is: " << course.get_course_name() << endl;
	cout << "Object position in memory: " << &course << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}
