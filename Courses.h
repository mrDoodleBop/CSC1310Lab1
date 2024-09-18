/*
    File Name : Courses.h
    Author Name : 
    Purpose : 
*/

#ifndef COURSES_H
#define COURSES_H

#include "Assignment.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Courses {
    private:
        string name;
        string section;
        double grade;
        //vector <Assignment>* myAssignments; --> you may uncomment this when the Assignment class has been created :)
    
    public:
        //Constructors:
        Courses(){
            cout << "\nCourse created.";
        }

        Courses(string studentName, string studentSection, double studentGrade);

        //Member Functions
        string getName();

};//end of Courses class

#endif