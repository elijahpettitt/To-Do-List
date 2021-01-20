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

	command = argv[1];

	if (argc == 4 && !command.compare("add")) {
		tdl.add(argv[2], argv[3]);
	}
	else {
		cout << "Incorrect command line input" << endl;
		return 1;
	}


	return 0;
}