/*  
    File Name : Courses.cpp
    Author Name : 
    Purpose : 
*/

#include "Courses.h"


//Function Definitions:

string Courses::getName(){

    return name;

}//end of getName() constructor function

void Courses::printInfo(){

    system("CLS");
    cout << "\n\t\t|----------Your Course----------|";
    cout << "\n\t\tName: " << name;
    cout << "\n\t\tSection: " << section;
    cout << "\n\t\tCurrent Grade: " << grade;

    cout << "\n\t\t|----------Your Current Assignments----------|";

    //print the assignment info for each element in assignments:
    

}//end of printInfo function


