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
    cout << "\n----------STUDENT INFORMATION----------\n";
    cout << "\nNAME :     " << name;
    cout << "\nAge  :     " << age;
    cout << "\nYear :     " << year;
    cout << "\n     ----------COURSES----------\n";

    //Here will be a loop to iterate through the vector of courses and print out each course that the student is taking:
    for(int i = 0; i < myCourses.size(); i++){

        cout << "\nCourse " << i+1 << ":     " << myCourses[i].getName();

    }//end of for loop

}//end of printStudentInfo() function
