/*
    File Name : Assignment.cpp
    Author Name : Nino Chindavanh
    Purpose : .cpp file for the Assignment class
*/



#include "Assignment.h"


//Function definitions:

//GETTER FUNCTIONS:
void Assignment::getInfo(){

    cout << "\n\t\t-----Assignment: ";
    cout << "\n\t\tName: " << name;
    cout << "\n\t\tDue Date: " << dueDate;
    cout << "\n\t\tPriority Level: " << priorityLevel;
    cout << "\n\t\tNotes: " << notes;
    cout << "\n\t\t-----------------------------------";

}//end of getInfo() function

string Assignment::getName(){

    return name;

}//end of get name function

string Assignment::getDueDate(){

    return dueDate;

}//end of get due date function

int Assignment::getPriorityLevel(){

    return priorityLevel;

}//end of get priority level function

string Assignment::getNotes(){

    return notes;

}//end of get notes function


//MUTATOR FUNCTIONS:
void Assignment::setName(string newName){

    name = newName;

}//end of set name function

void Assignment::setDueDate(string newDate){

    dueDate = newDate;

}//end of set due date function

void Assignment::setPriorityLevel(int newLevel){

    priorityLevel = newLevel;

}//end of set priority level function

void Assignment::setNotes(string newNotes){

    notes = newNotes;

}//end of set notes function


