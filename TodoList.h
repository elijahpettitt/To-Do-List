#ifndef TODO_LIST_H
#define TODO_LIST_H

#include <iostream>
#include <string>
#include "TodoListInterface.h"

using namespace std;

class TodoList : public TodoListInterface {
public:
    TodoList() {}
    ~TodoList() {}

    /*
    *   Adds an item to the todo list with the data specified by the string "_duedate" and the task specified by "_task"
    */
    void add(string _duedate, string _task){
      cout << "in add";
    }

    /*
    *   Removes an item from the todo list with the specified task name
    *
    *   Returns 1 if it removes an item, 0 otherwise
    */
    int remove(string _task){
      cout << "in remove";

    }

    /*
    *   Prints out the full todo list to the console
    */
    void printTodoList() {
      cout << "in print";

    }
    
    /*
    *   Prints out all items of a todo list with a particular due date (specified by _duedate)
    */
    void printDaysTasks(string _date) {
      cout << "in print days tasks";

    }
};

#endif