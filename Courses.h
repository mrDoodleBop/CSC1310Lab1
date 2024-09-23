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


class Courses{

    private:
        string name; //name of the course
        string section; //course section (i.e. 1310-001)
        double grade; //current grade in the course
        vector <Assignment> myAssignments; //vector of Assignment type holding all current assignments for the course
    
    public:
        //Constructors\\:
        Courses(){
            
            this->name = "N/A";
            this->section = "N/A";
            this->grade = 0.0;

        }//end of default constructor

        Courses(string studentName, string studentSection, double studentGrade, vector <Assignment> userAssignments){

            name = studentName;
            section = studentSection;
            grade = studentGrade;
            myAssignments = userAssignments;

        }//end of overloaded constructor


        //Member Functions\\:
        string getName();
        void printInfo();

};//end of Courses class

#endif