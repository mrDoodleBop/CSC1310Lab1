/*  
    File Name : Courses.cpp
    Author Name : 
    Purpose : 
*/

#include "Courses.h"


//Function Definitions:

string Courses::getName(){

    return this->name;

}//end of getName() constructor function

void Courses::printInfo(){

    cout << "\nInfo: " << this->name;
    cout << "\nInfo: " << this->section;
    cout << "\nInfo: " << this->grade;

}//end of printInfo function


