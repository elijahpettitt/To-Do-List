#include <iostream>
#include <fstream>
#include <string>
#include "TodoListInterface.h"

TodoList::TodoList() {
	fstream inFile("TODOList.txt");
	cout << "in constructor" << endl;
	string s = "";

	while(inFile.is_open() && !inFile.eof()) {
		inFile >> s;
		tasks.push_back(s);
		cout << s << endl;
	}

	inFile.close();
}

TodoList::~TodoList() {
	fstream outFile;
	outFile.open("TODOList.txt"); // make it truncate
	cout << "in destructor  " << outFile.is_open() << endl;

	outFile << "Replaced!";

	outFile.close();
}


void TodoList::add(string duedate, string task) {
	cout << "In cpp add" << endl;
}

int TodoList::remove(string task) {
  cout << "in remove" << endl;
}

void TodoList::printTodoList() {

}

void TodoList::printDaysTasks(string date) {

}