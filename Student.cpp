/*
    File Name : Student.cpp
    Author Name : Michael Cates
    Purpose : Class definition file for GitWorkin! program
*/

#include "Student.h"
#include "gitWorkinFunctions.h"

//Function Definitions:

/*
    Name : printStudentInfo()
    Parameters : none
    Returns : none
    Purpose : Display the all student information in an easy to read format
*/
void Student::printStudentInfo(){
    cout << "\n\n\n\t\t----------STUDENT INFORMATION----------\n";
    cout << "\n\t\tNAME :     " << name;
    cout << "\n\t\tAge  :     " << age;
    cout << "\n\t\tYear :     " << year;
    cout << "\n\n\t\t----------COURSES----------\n";

    //Here will be a loop to iterate through the vector of courses and print out each course that the student is taking:
    for(int i = 0; i < 5; i++){
        //cout << "\n\t\tCourse " << i+1 << ": " << myCourses[i].getName();
        myCourses[i].printCourseInfo();
    }

}//end of printStudentInfo() function

/*MUTATOR FUNCTIONS*/

void Student::setUserName(string userName){

    name = userName;

}//end of set user name function

void Student::setUserAge(int userAge){

    age = userAge;

}//end of set user age function

void Student::setUserYear(int userYear){
    
    year = userYear;

}//end of set user year function


/*GETTER FUNCTIONS*/
void Student::getUserCourses(){

    //for loop:
    for(int i = 0; i < numCourses; i++){

        //Calling the info getter function from courses:+
        myCourses[i].printCourseInfo();

    }//end of for loop

}//end of courses getter function

Courses Student::returnUserCourses(){

    Courses *courses;
    
    courses = myCourses;

    return *courses;

}//end of returnUserCourses function

string Student::getUserName(){

    return name;

}//end of getUserName function

int Student::getUserAge(){

    return age;

}//end of get user age function

int Student::getUserYear(){

    return year;

}//end of get user year function

