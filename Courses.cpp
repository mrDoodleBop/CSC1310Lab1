/*  
    File Name : Courses.cpp
    Author Name : 
    Purpose : 
*/

#include "Courses.h"


//Function Definitions:

//GETTER FUNCTIONS:

string Courses::getName(){

    return name;

}//end of getName() constructor function

void Courses::printCourseInfo(){

    //system("CLS");
    cout << "\n\n\n\t\t|----------Your Course----------|";
    cout << "\n\t\tName: " << name;
    cout << "\n\t\tSection: " << section;
    cout << "\n\t\tCurrent Grade: " << grade;

    cout << "\n\t\t|----------Assignments in " << name << " - " << section << "----------|";

    //print the assignment info for each element in assignments:
    for(int i = 0; i < 5; i++){

        myAssignments[i].getInfo();

    }//end of for loop
    

}//end of printInfo function

string Courses::getSection(){
    return section;
}//end of get section function

double Courses::getGrade(){

    return grade;

}//end of get grade function

//MUTATOR FUNCTIONS:

void Courses::setCourseGrade(double newGrade){

    grade = newGrade;

}//end of set course grade function

void Courses::setCourseSection(string newSection){

    section = newSection;

}//end of set course section function

void Courses::setCourseName(string newName){

    name = newName;

}//end of set course name function


