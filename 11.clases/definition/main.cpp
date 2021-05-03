#include <cstdlib>
#include <iostream>
using namespace std;

class NotesBook {
	public: void showMessage(string courseName) const {
		cout << "Welcome to notes book for " << courseName << endl;
	}
};

int main() {
	string courseName;
	NotesBook notes_book;
	cout << "Enter course name: ";
	getline(cin, courseName);
	fflush(stdin);
	cout << endl;
	notes_book.showMessage(courseName);
	system("pause");
	fflush(stdout);
	return EXIT_SUCCESS;
}
