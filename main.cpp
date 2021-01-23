#include <iostream>
#include "TodoList.h"
#include "TodoList.cpp"
using namespace std;

int main(int argc, char *argv[]) {
  string command = "none";
	TodoList tdl;
	if (argc == 1 || argc > 4){
		cout << "Not enough arguments or too many" << endl;
		return 1;
	}

	tdl.printTodoList();
	cout << endl;

	command = argv[1];

	if (argc == 4 && !command.compare("add")) {
		tdl.add(argv[2], argv[3]);
	}
	else if (argc == 3 && !command.compare("remove")) {
		tdl.remove(argv[2]);
	}
	else if (argc == 2 && !command.compare("printList")) {
		tdl.printTodoList();
	}
	else if (argc == 3 && !command.compare("printDay")) {
		tdl.printDaysTasks(argv[2]);
	}
	else {
		cout << "Incorrect command line input" << endl;
		return 1;
	}

	cout << endl;
	tdl.printTodoList();

	return 0;
}