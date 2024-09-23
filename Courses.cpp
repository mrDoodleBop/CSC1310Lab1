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

    system("CLS");
    cout << "\n\t\t|----------Your Course----------|";
    cout << "\n\t\tName: " << name;
    cout << "\n\t\tSection: " << section;
    cout << "\n\t\tCurrent Grade: " << grade;

    cout << "\n\t\t|----------Your Current Assignments----------|";

    //Running a for loop to access each assignment in the vector and call the getInfo function:
    for(int i = 0; i < myAssignments.size(); i++){

        myAssignments[i].getInfo();

    }//end of for loop

}//end of printInfo function


