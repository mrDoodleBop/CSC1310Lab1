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
        int numCourses;

        //array of Courses type
        Courses* myCourses;

    public:
        //Constructors:
        Student(){
            //cout << "\nStudent created.";
            name = "John Doe";
            age = 18;
            year = 1;
            numCourses = 0;

            myCourses[numCourses];
        }

        Student(string studentName, int studentAge, int studentYear, int numUserCourses, Courses* courses[]){
            name = studentName;
            age = studentAge;
            year = studentYear;
            numCourses = numUserCourses;

            myCourses[numCourses];
            
            
            for(int i = 0; i < numCourses; i++){

                myCourses[i] = *courses[i];
                
            }
        }

        //Member Function Declarations:
        void printStudentInfo();

        //GETTER functions:
        Courses getUserCourses();

        string getUserName();

        int getUserAge();

        int getUserYear();

        int getNumCourses();

        //MUTATOR functions:
        void setUserCourses(Courses newCoursesArr[], int newCoursesArrLength);

        void setUserName(string userName);

        void setUserAge(int userAge);

        void setUserYear(int userYear);

        void setNumCourses(int numCourses); 
   
};


#endif