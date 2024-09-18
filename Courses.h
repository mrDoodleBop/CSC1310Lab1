/*
    File Name : Courses.h
    Author Name : 
    Purpose : 
*/

#ifndef COURSES_H
#define COURSES_H

//#include "Assignment.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Courses{

    private:
        string name;
        string section;
        double grade;
        //vector <Assignment>* myAssignments; --> you may uncomment this when the Assignment class has been created :)
    
    public:
        //Constructors:
        Courses::Courses(){
            
            cout << "\nDefault course created.";
            name = "N/A";
            section = "N/A";
            grade = 0.0;

        }//end of default constructor

        Courses::Courses(string studentName, string studentSection, double studentGrade){

            cout << "\nName passed: " << name; 
            name = studentName;

            cout << "\nThis name: " << name;
            cout << "\n" << getName();

            section = studentSection;
            grade = studentGrade;

        }//end of Courses() constructor method

        //Member Functions
        string getName();

};//end of Courses class

#endif