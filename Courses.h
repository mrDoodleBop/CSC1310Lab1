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
        //Constructors\\:
        Courses(){
            
            this->name = "N/A";
            this->section = "N/A";
            this->grade = 0.0;

            cout << "\nDefault has been called";

        }//end of default constructor

        Courses(string studentName, string studentSection, double studentGrade){

            this->name = studentName;
            this->section = studentSection;
            this->grade = studentGrade;

        }//end of overloaded constructor


        //Member Functions\\:
        string getName();
        void printInfo();

};//end of Courses class

#endif