/*  
    File Name : Courses.cpp
    Author Name : 
    Purpose : 
*/

#include "Courses.h"


//Function Definitions:

Courses(string studentName, string studentSection, double studentGrade){
            cout << "\nName passed: " << name; 
            name = studentName;
            cout << "\nThis name: " << name;
            cout << "\n" << getName();
            section = studentSection;
            grade = studentGrade;
        }


string Courses::getName(){
    return name;
}



