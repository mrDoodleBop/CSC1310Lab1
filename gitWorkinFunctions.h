/*
    File Name : gitWorkinFunctions.cpp
    Author Name : Michael Cates
    Date : 9/25/2024
    Purpose : hold major function prototypes for gitWorkin program
*/

#ifndef GITWORKINFUNCTIONS_H
#define GITWORKINFUNCTIONS_H

#include "Student.h"//Student class header file
#include "Courses.h"//Courses class header file
#include "Assignment.h"//Assignment class header file

#include <iostream>
#include <string>

using namespace std;


//Function Prototypes:
Courses createCourse();

Assignment createAssignment();

Student createStudent();

#endif