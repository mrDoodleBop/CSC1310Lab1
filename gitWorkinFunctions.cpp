/*
    File Name : gitWorkinFunctions.cpp
    Author Name : Michael Cates
    Purpose : Hold all other functions for the gitWorkin program
*/


#include "gitWorkinFunctions.h"


//Function Definitions:

/*
    Name : createAssignment
    Arguments : none
    Returns : Assignment object
    Purpose : take in user information and return an Assignment object
*/

Assignment createAssignment(){

    //Assignment class attributes:
    string assignmentName;
    string assignmentDueDate; //(mm/dd/yyyy)
    int assignmentPriorityLevel; //(1-5)
    string assignmentNotes; //limited to 75 characters

    Assignment task;

    cout << "\n\n\t\t|----------Creating a New Assignment!----------|";

    //taking in the assignment name:
    cout << "\n\t\tEnter assignment name: ";
    cin.ignore();
    getline(cin, assignmentName);

    //taking in the due date:
    cout << "\n\t\tEnter assignment due date (mm/dd/yyyy): ";
    getline(cin, assignmentDueDate);

    //taking in the priority level:
    cout << "\n\t\tEnter assignment priority level (1-5): ";
    cin >> assignmentPriorityLevel;

    //validating that user input is within the correct range:
    while(assignmentPriorityLevel > 5 || assignmentPriorityLevel < 1){

        cout << "\n\t\tUh oh! You entered a number outside of the range!\n\t\tEnter a number between 1 and 5: ";
        cin >> assignmentPriorityLevel;

    }//end of while loop

    //taking in the assignment notes:
    cout << "\n\t\tEnter any other notes you have for the assignment (limited to 75 characters): ";
    cin.ignore();
    getline(cin, assignmentNotes);

    //validating that user input is within the correct range:
    while(assignmentNotes.size() > 75){

        cout << "\n\t\tUh oh! Your notes for this assignment are too long!\n\t\tPlease enter notes within 75 characters: ";
        cin >> assignmentNotes;
    }//end of while loop

    //task.setInfo(assignmentName, assignmentDueDate, assignmentPriorityLevel, assignmentNotes);

    task = Assignment(assignmentName, assignmentDueDate, assignmentPriorityLevel, assignmentNotes);
    cout << "\n\t\tAssignment created and returned.";

    //return value:
    return task;

}//end of createAssignment() function

/*
    Name : createCourse
    Arguments : none
    Returns : Courses object
    Purpose : take in user information and return a Courses object
*/

Courses createCourse(){

    //Course class attributes:
    string courseName;
    string courseSection;
    double currentGrade;

    Assignment* currentAssignments;//pointer array

    char hasAssignments;
    int numAssignments;

    //creating an object of Courses:
    Courses tempCourse;

    cout << "\n\n\t\t|----------Creating a New Course!----------|";

    //Creating a course using user input:
    cout << "\n\t\tEnter the course name: ";
    cin.ignore();
    getline(cin, courseName);
                

    cout << "\n\t\tEnter the course section for " << courseName << ": ";
    getline(cin, courseSection);

    cout << "\n\t\tEnter your current grade in " << courseName << " - " << courseSection << ": ";
    cin >> currentGrade;

    //Checking if the user has any current assignments:
    cout << "\n\t\tDo you have any current assignments in " << courseName << " - " << courseSection << "? (y/n): ";
    cin >> hasAssignments;

    //Branching based on the value of hasAssignments:

    if(hasAssignments == 'y' || hasAssignments == 'Y'){
        int numAssignments = 5;

        currentAssignments[numAssignments];

        cout << "\n\t\tNow we will create the five assignments you have for this course:";

        //for loop to create numAssignments number of assignment objects:
        for(int i = 0; i < numAssignments; i++){

            currentAssignments[i] = createAssignment();
            cout << "\n\t\tAssignment created inside of the for loop. Reiterating...";

        }//end of for loop
        
    } else {

        //user has no current assignments:
        cout << "\n\t\tLucky you! Enjoy your rare freetime!";

    }//end of branching statement

    tempCourse = Courses(courseName, courseSection, currentGrade, currentAssignments);
    cout << "\n\t\tCourse created, now returning from the function...";

    //return value
    return tempCourse;

}//end of createCourses() function

/*
    Name : createStudent
    Arguments : none
    Returns : Student object
    Purpose : take in user information and return a Student object
    --> The create student function will call the create course function which will then 
    call the create course function
    --> this introduces the heirarchy of classes going from Student at the top to Assignment at the bottom
*/

Student createStudent(){

    //Student class attributes:
    string userName;
    int userAge;
    int userYear;

    //creating the arrays for student and courses:
    Courses userCourses[5];
    Assignment userAssignments[5];

    //Object Declarations:
    Assignment userAssignment; //Assignment object to store a new userAssignment
    Courses userCourse; //Courses object to store a new userCourse
    Student user; //Student object to store ALL student information

    cout << "\n\n\t\t|----------Creating a New Student!----------|";

    //Asking the user their name:
    cout << "\n\t\tPlease enter your name: ";
    getline(cin, userName);

    //Asking the user their age:
    cout << "\n\t\tPlease enter your age: ";
    cin >> userAge;

    //Asking the user their year:
    cout << "\n\t\tPlease enter your year (1, 2, 3, etc.): ";
    cin >> userYear;

    //Asking the user to enter the five courses they are taking this semester:
    cout << "\n\t\tNow we will add your five courses for the semester to your transcript: ";

    //creating numCourses number of courses for the user
    for(int i = 0; i < 5; i++){

        userCourses[i] = createCourse();
        cout << "\n\n\t\t" << userCourses[i].getName() << " has been created\nMoving on to create the next course!";

    }//end of for loop

    

    user = Student(userName, userAge, userYear, userCourses);
    cout << "Student created, now returning from the function...";

    //return value:
    return user;


}//end of createStudentFunction

