/*
    File Name : Assignment.h
    Author Name : Nino Chindavanh
    Purpose : 
*/

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <iostream>
#include <string>

using namespace std;

class Assignment
{
    private:
        string name;
        string dueDate;         // (mm/dd/yyyy)
        int priorityLevel;      // (1-5)
        char notes;             // (Limited to 75 Characters)

    public:
        Assignment()            // constructor
        {
        // overloaded constructor takes in info
        name = "John Doe";
        dueDate = "12/34/5678";
        priorityLevel = 1;
        // notes;
        }

        Assignment(string assignmentName);          // destructor

};


#endif