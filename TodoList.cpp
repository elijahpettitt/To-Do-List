#include <iostream>
#include <fstream>
#include <string>
#include "TodoListInterface.h"

TodoList::TodoList() {
	fstream inFile("TODOList.txt");

	while(inFile.is_open() && )

	inFile >> nextWord;
}

TodoList::~TodoList() {

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