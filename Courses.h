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

using namespace std;


class Courses{

    private:
        string name; //name of the course
        string section; //course section (i.e. 1310-001)
        double grade; //current grade in the course
        Assignment myAssignments; //array of Assignment type holding all current assignments for the course
    
    public:
        //Constructors\\:
        Courses(){
            
            name = "N/A";
            section = "N/A";
            grade = 0.0;

        }//end of default constructor

        Courses(string courseName, string studentSection, double studentGrade, Assignment* assignments){

            name = courseName;
            section = studentSection;
            grade = studentGrade;
            myAssignments = *assignments;

        }//end of overloaded constructor


        //Member Functions\\:
        string getName();
        void printInfo();

};//end of Courses class

#endif