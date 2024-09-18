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


//just a tester main, not meant for release
int main(){
    Courses("Rawr", "Hello", 2.0);
    Courses newCourse1 = Courses("CSC 1310", "Section 001", 95.2);
    cout << "\n" << newCourse1.getName();

    Courses newCourse2("HIST 2010", "Section 005", 67.9);
    cout << "\n" << newCourse2.getName();

    Courses newCourse3("GEOL 1045", "Section 004", 84.5);
    cout << "\n" << newCourse3.getName();

    vector <Courses> myCourses{newCourse1, newCourse2, newCourse3};

    Student newStudent("Mike", 20, 3, myCourses);

    //newStudent.printStudentInfo();

    cout << "\n\nCourse list size: " << myCourses.size();
}



