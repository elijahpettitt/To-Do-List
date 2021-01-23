#include <iostream>
#include <fstream>
#include <string>
#include "TodoListInterface.h"

using namespace std;

TodoList::TodoList() {
	fstream inFile("TODOList.txt");
	string s = "";

	if (inFile.is_open()) {

		while (!inFile.eof()) {
			getline(inFile, s);
			if (!inFile.eof()) {
				tasks.push_back(s);
			}
		}
	}
	else {
		cout << "failed to open file" << endl;
	}

	inFile.close();
}

TodoList::~TodoList() {
	fstream outFile;
	outFile.open("TODOList.txt", fstream::out | std::ofstream::trunc);

	for(int i = 0; i < tasks.size(); i++){
		outFile << tasks.at(i) << endl;
	}

	outFile.close();
}


void TodoList::add(string duedate, string task) {
	tasks.push_back(duedate);
	tasks.push_back(task);
}

int TodoList::remove(string task) {
	for(int i = 0; i < tasks.size(); i++){
		if (!tasks.at(i).compare(task)) {
			tasks.erase(tasks.begin()+i);
			i--;
			tasks.erase(tasks.begin()+i);
		}
	}
}

void TodoList::printTodoList() {
	for(int i = 0; i < tasks.size(); i++){
		cout << tasks.at(i) << endl;
	}
}

void TodoList::printDaysTasks(string date) {
	for(int i = 0; i < tasks.size(); i++){
		if (!tasks.at(i).compare(date)) {
			cout << tasks.at(i+1);
		}
	}
}