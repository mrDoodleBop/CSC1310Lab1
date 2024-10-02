/*
    File Name : Courses.h
    Author Name : Mackenzie Raleigh
    Purpose : Header file for the Courses class
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
        int numAssignments = 5;

        Assignment myAssignments[5];
    
    public:
        //Constructors\\:
        Courses(){
            
            name = "N/A";
            section = "N/A";
            grade = 0.0;

        }//end of default constructor

        Courses(string courseName, string studentSection, double studentGrade, Assignment assignments[]){

            name = courseName;
            section = studentSection;
            grade = studentGrade;
            
            for(int i = 0; i < numAssignments; i++){

                myAssignments[i] = assignments[i];
                
            }

        }//end of overloaded constructor


        //Member Functions\\:


        //Getter Functions\\:
        string getName();
        string getSection();
        double getGrade();
        void printCourseInfo();

        //Mutator Functions\\:
        void setCourseName(string);
        void setCourseSection(string);
        void setCourseGrade(double);

};//end of Courses class

#endif