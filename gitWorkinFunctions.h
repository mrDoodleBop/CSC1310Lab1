/*
    File Name : gitWorkinFunctions.cpp
    Author Name : Michael Cates
    Date : 9/25/2024
    Purpose : hold major function prototypes for gitWorkin program
*/

#ifndef GITWORKINFUNCTIONS_H
#define GITWORKINFUNCTIONS_H


#include <iostream>
#include <string>

#include "Courses.h"
#include "Student.h"
#include "Assignment.h"

using namespace std;


//Function Prototypes:
Courses createCourse();

Assignment createAssignment();

Student createStudent();

void addAssignment();

void removeAssignment();

void addCourse();

void removeCourse();


#endif