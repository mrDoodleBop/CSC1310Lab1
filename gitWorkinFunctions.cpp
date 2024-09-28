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
    int assignmentPriorityLevel; (1-5);
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
        //creating the assignments to go into the course class:
        cout << "\n\t\tEnter the number of assignments you currently have for " << courseName << " - " << courseSection << ": ";
        cin >> numAssignments;

        currentAssignments[numAssignments];

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

    int numCourses;

    //creating the arrays for student and courses:
    Courses* userCourses;
    Assignment* userAssignments;

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

    //Taking in the current courses that the user has:
    //-->first by asking how many courses the student is taking:
    cout << "\n\n\t\tHow many courses are you taking this semester? Enter an integer: ";
    cin >> numCourses;
    userCourses[numCourses];

    //Checking if the user is taking any courses or not:
    if(numCourses == 0){

        cout << "\n\n\t\tYou aren't taking any courses? Wow! Enjoy your freetime!";

    } else {

        //creating numCourses number of courses for the user
        for(int i = 0; i < numCourses; i++){

            userCourses[i] = createCourse();
            cout << "\n\n\t\t" << userCourses[i].getName() << " has been created\nMoving on to create the next course!";

        }//end of for loop

    }

    user = Student(userName, userAge, userYear, numCourses, &userCourses);
    cout << "Student created, now returning from the function...";

    //return value:
    return user;


}//end of createStudentFunction

/*
    Name : addAssignment
    Arguments : none
    Returns : none
    Purpose : add an assignment to a specific course in the courses array in the Student object
*/

void addAssignment(Student user){

}//end of addAssignment function

/*
    Name : removeAssignment
    Arguments : none
    Returns : none
    Purpose : remove an assignment from a specific course in the courses array in the Student object
*/

void removeAssignment(Student user){

}//end of removeAssignment function

/*
    Name : addCourse
    Arguments : the user's list of courses
    Returns : none
    Purpose : add a course to the courses array in the Student object
        --> this function calls the createCourse function
*/

void addCourse(Student user){

    Courses* oldArr;

    Courses tempCourse;
    cout << "\n\t\t|----------Adding a Course to Your Transcript!----------|\n";
    
    tempCourse = createCourse();

    //Resizing the userCourses array in order to add a course:
    *oldArr = user.getUserCourses();

    Courses newArr[user.getNumCourses() + 1];

    //adding courses from oldArr to newArr:
    for(int i = 0; i < user.getNumCourses(); i++){

        newArr[i] = oldArr[i];

    }//end of for loop

    //Adding the new course to the new array:

    Courses newCourse = createCourse();

    newArr[user.getNumCourses()] = newCourse;

    user.setUserCourses(newArr, user.getNumCourses()+1);

}//end of addCourse function

/*
    Name : removeCourse
    Arguments : none
    Returns : none
    Purpose : remove a course from the courses array in the Student object
*/

void removeCourse(Student user){

    int numCourses = user.getNumCourses();
    Courses oldArr[numCourses] = {user.getUserCourses()};
    
    Courses newArr[numCourses-1];

    //Variable to store the user's choice:
    int choice;

    //Asking user which course they would like to remove:
    cout << "\n\n\t|---------Removing a Course from Your Transcript!---------|";
    cout << "\n\t\tWhich course would you like to remove? Enter one of the options below (1, 2, 3, etc.): ";

    //Printing each course in the old array:
    for(int i = 0;i < numCourses; i++){

        cout << "\n\t\t" << i + 1 << ": " << oldArr[i].getName();

    }//end of for loop

    cout << endl;
    cin >> choice;

    //Adding all courses to the new array except for at index choice - 1:
    for(int i = 0; i < numCourses - 1; i++){

        if(i = (choice-1)){//if the current index matches that of the removed course

            cout << "\n\t\tRemoving " << oldArr[i].getName() << " from the array!";

        } else { //otherwise add the course at the current index to the new list

            newArr[i] = oldArr[i];

        }

    }//end of for loop

    user.setUserCourses(newArr, numCourses-1);

}//end of removeCourse function

