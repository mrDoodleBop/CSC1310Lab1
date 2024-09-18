/*
    File Name : Student.h
    Author Name : Michael Cates
    Purpose : Header file for the Student class of the GitWorkin! program
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Courses.cpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Student  {
    private:
        string name;
        int age;
        int year;
        //vector pointing to a list of Courses type
        vector <Courses> myCourses; // --> eventually it will be a pointer

    public:
        //Constructors:
        Student(){
            //cout << "\nStudent created.";
            name = "John Doe";
            age = 18;
            year = 1;
        }

        Student(string studentName, int studentAge, int studentYear, vector <Courses> courses){
            name = studentName;
            age = studentAge;
            year = studentYear;
            myCourses = courses;
        }

        //Member Function Declarations:
        void printStudentInfo();
   
};


#endif