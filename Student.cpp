/*
    File Name : Student.cpp
    Author Name : Michael Cates
    Purpose : Class definition file for GitWorkin! program
*/

#include "Student.h"

//Function Definitions:

/*
    Name : printStudentInfo()
    Parameters : none
    Returns : none
    Purpose : Display the all student information in an easy to read format
*/
void Student::printStudentInfo(){
    cout << "\n\t\t----------STUDENT INFORMATION----------\n";
    cout << "\n\t\tNAME :     " << name;
    cout << "\n\t\tAge  :     " << age;
    cout << "\n\t\tYear :     " << year;
    cout << "\n\t\t----------COURSES----------\n";

    //Here will be a loop to iterate through the vector of courses and print out each course that the student is taking:
    for(int i = 0; i < numCourses; i++){
        cout << "\n\t\tCourse " << i+1 << ": " << myCourses[i].getName();
    }

}//end of printStudentInfo() function

/*MUTATOR FUNCTIONS*/
void Student::setUserCourses(Courses newCoursesArr[], int newCoursesArrLength){

    Courses result[newCoursesArrLength];

    //Add courses from the inputted array into a new array and set that equal to myCourses:
    for(int i = 0; i < newCoursesArrLength; i++){

        result[i] = newCoursesArr[i];

    }//end of for loop
    

}//end of set user courses array

void Student::setUserName(string userName){

    name = userName;

}//end of set user name function

void Student::setUserAge(int userAge){

    age = userAge;

}//end of set user age function

void Student::setUserYear(int userYear){
    
    year = userYear;

}//end of set user year function

void Student::setNumCourses(int numUserCourses){

    numCourses = numUserCourses;

}//end of set num courses function

/*GETTER FUNCTIONS*/
Courses Student::getUserCourses(){

    return *myCourses;

}//end of courses getter function

string Student::getUserName(){

    return name;

}//end of getUserName function

int Student::getUserAge(){

    return age;

}//end of get user age function

int Student::getUserYear(){

    return year;

}//end of get user year function

int Student::getNumCourses(){

    return numCourses;

}//end of get num courses function

