/*
    File Name : Student.h
    Author Name : Michael Cates
    Purpose : Header file for the Student class of the GitWorkin! program
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Courses.h"

#include <iostream>
#include <string>

using namespace std;


class Student  {
    private:
        string name;
        int age;
        int year;
        int numCourses = 5;

        //array of Courses type
        Courses myCourses[5];

    public:
        //Constructors:
        Student(){
            //cout << "\nStudent created.";
            name = "John Doe";
            age = 18;
            year = 1;
            numCourses = 5;

            myCourses[5];
        }

        Student(string studentName, int studentAge, int studentYear, Courses courses[]){
            name = studentName;
            age = studentAge;
            year = studentYear;
            
            for(int i = 0; i < numCourses; i++){

                myCourses[i] = courses[i];
                
            }
        }

        //Member Function Declarations:
        void printStudentInfo();

        //GETTER functions:
        void getUserCourses();

        Courses returnUserCourses();

        string getUserName();

        int getUserAge();

        int getUserYear();

        //MUTATOR functions:

        void setUserName(string userName);

        void setUserAge(int userAge);

        void setUserYear(int userYear);
   
};


#endif