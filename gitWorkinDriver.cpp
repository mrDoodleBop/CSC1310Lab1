/*
    File Name : gitWorkinDriver.cpp
    Author Name : Michael Cates
    Purpose : Main file for the GitWorkin! program
*/

#include "Student.h"
#include "Courses.h"

#include <cstdlib>


//main function:
int main(){

    //Variable declarations:
    char flag = 'y';

    //Printing welcome screen:
    system("CLS");
    cout << "\n\n\t\t|----------STUDENT DATA CENTER----------|";
    cout <<"\n-----Track your student information, courses, and tasks here!-----";

    //Asking user if they would like to begin:
    cout << "\n\nWould you like to begin by setting up your student database? (y/n):\t";
    cin >> flag;

    //while loop to run program:
    while(flag == 'y' || flag == 'Y'){

        //Variable storing the user's menu choice
        int userChoice;

        //Printing the program menu:
        system("CLS");
        cout << "\n\n\t\t\t|----------Menu----------|";
        cout << "\n\t\t------What would you like to do?-----";
        cout << "\n\t\t1. Create a New Student";
        cout << "\n\t\t2. Add/ Remove a Course";
        cout << "\n\t\t3. Add/ Remove an Assignment to a course";
        cout << "\n\t\t4. End Program";
        cout << "\n\t\t---------------------------------------------";

        //Taking in the user's choice:
        cout << "\n\n\t\tEnter your choice: ";
        cin >> userChoice;

        cin.ignore();

        system("CLS");

        //Branching the user's choice:
        if(userChoice == 1){//create a new student

            //Student class attributes:
            string userName;
            int userAge;
            int userYear;

            int numCourses;

            //Course class attributes:
            string courseName;
            string courseSection;
            double currentGrade;
            vector <Assignment> currentAssignments;

            char hasAssignments;
            int numAssignments;

            //Assignment class attributes:
            string assignmentName;
            string assignmentDueDate; //(mm/dd/yyyy)
            int assignmentPriorityLevel; (1-5);
            string assignmentNotes; //limited to 75 characters

            //creating the vectors for student and courses:
            vector <Courses> userCourses;
            vector <Assignment> userAssignments;
            
            //Asking the user their name:
            cout << "\nPlease enter your name: ";
            getline(cin, userName);

            //Asking the user their age:
            cout << "\nPlease enter your age: ";
            cin >> userAge;

            //Asking the user their year:
            cout << "\nPlease enter your year (1, 2, 3, etc.): ";
            cin >> userYear;

            //Taking in the current courses that the user has:
            //-->first by asking how many courses the student is taking:
            cout << "\n\nHow many courses are you taking this semester? Enter an integer: ";
            cin >> numCourses;

            system("CLS");
            cout << "\n\t\t-----Creating a New Course!-----";

            for(int i = 0; i < numCourses; i++){

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

                /*
                --> This is a problem that I ran into with creating classes using the switch statement 
                    I have learned that you need to declare the class outside of the switch to correct the 
                    scope of the class
                */

               Assignment userAssignment; //Assignment object to store a new userAssignment
               Courses userCourse; //Courses object to store a new userCourse

                //branching based off if the student has any current assignments or not:
                switch(hasAssignments){

                    case 'y':
                        //creating the assignments to go into the course class:
                        cout << "\n\t\tEnter the number of assignments you currently have for " << courseName << " - " << courseSection << ": ";
                        cin >> numAssignments;

                        //Creating each assignment:
                        for(int j = 0; j < numAssignments; j++){
                            
                            //taking in the assignment name:
                            cout << "\n\t\tEnter assignment " << j+1 << "'s name: ";
                            cin.ignore();
                            getline(cin, assignmentName);

                            //taking in the due date:
                            cout << "\n\t\tEnter assignment " << j+1 << "'s due date (mm/dd/yyyy): ";
                            getline(cin, assignmentDueDate);

                            //taking in the priority level:
                            cout << "\n\t\tEnter assignment " << j+1 << "'s priority level (1-5): ";
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

                            }

                            //creating the assignment object and adding it to the vector:
                            userAssignment = Assignment(assignmentName, assignmentDueDate, assignmentPriorityLevel, assignmentNotes);

                            userAssignments.push_back(userAssignment);


                        }//end of for loop creating assignments vector

                        //adding the course to the list of user courses:
                        userCourse = Courses(courseName, courseSection, currentGrade, userAssignments);

                        userCourses.push_back(userCourse);


                        /*
                        -->THIS IS TESTER CODE TO MAKE SURE THE 
                        PROGRAM IS WORKING CORRECTLY UP TO THIS POINT
                        */
                        //printing all course info for each course:
                        for(int j = 0; j < userCourses.size(); j++){

                            userCourses[i].printInfo();

                        }


                        break;


                    case 'n':
                        break;

                }//end of switch

            }//end of for loop creating courses vector

        } else if(userChoice == 2){//add/ remove a course
            cout << "2";
        } else if(userChoice == 3){//add/ remove an assignment
            cout << "3";
        } else {
            //Displaying goodbye message:
            cout << "\n\nClosing the program, have a great day!";
            break;
        }

        cout << "The program is still running!";


    }//end of while loop

}//end of main function
