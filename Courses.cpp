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

    /*
    //Printing all the current assignments for the course:
    
    -->this for loop will not work for the time being because the 
    getName() function has not yet been added to the Assignment class
    
    for(int i = 0; i < myAssignments.size(); i++){

        cout << "\nAssignment " << i << ": " << myAssignments(i).getName();

    }//end of for loop
    */

}//end of printInfo function


