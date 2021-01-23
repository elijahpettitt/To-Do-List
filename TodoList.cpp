#include <iostream>
#include <fstream>
#include <string>
#include "TodoListInterface.h"

// ask about public varieable tasks
// just a private variable that only that one can access

// ask about different main, how to make it univerally compatiable
// not a requirment but it should

// ask about syntax for * and &
// * declares a pointer
// & requests the address



TodoList::TodoList() {
	fstream inFile("TODOList.txt");
	cout << "in constructor" << endl;
	string s = "";

	if (inFile.is_open()) {

		inFile >> s;
		while (!inFile.eof()) {\
			tasks.push_back(s);
			inFile >> s;
		}
	}
	else {
		cout << "failed to open file" << endl;
	}

	inFile.close();
}

TodoList::~TodoList() {
	fstream outFile;
	outFile.open("TODOList.txt", fstream::out | std::ofstream::trunc); // make it truncate
	cout << "in destructor  " << outFile.is_open() << endl;

	for(int i = 0; i < tasks.size(); i++){
		outFile << tasks.at(i) << endl;
	}

	outFile.close();
}


void TodoList::add(string duedate, string task) {
	cout << "In cpp add" << endl;
	tasks.push_back(duedate);
	tasks.push_back(task);
}

int TodoList::remove(string task) {
  cout << "in remove" << endl;
	for(int i = 0; i < tasks.size(); i++){
		if (!tasks.at(i).compare(task)) {
			cout << tasks.at(i) << endl;
			tasks.erase(tasks.begin()+i);
			tasks.erase(tasks.begin()+i);
			cout << tasks.at(i) << endl;
		}
	}
}

void TodoList::printTodoList() {
  cout << "in print todolist" << endl;
	for(int i = 0; i < tasks.size(); i++){
		cout << tasks.at(i) << endl;
	}
}

void TodoList::printDaysTasks(string date) {
  cout << "in print days tasks" << endl;
}