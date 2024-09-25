/*
    File Name : gitWorkinDriver.cpp
    Author Name : Michael Cates
    Purpose : Main file for the GitWorkin! program
*/

#include "Student.h"
#include "Courses.h"
#include "gitWorkinFunctions.h"

#include <cstdlib>


//main function:
int main(){
    /*
        VARIABLE AND OBJECT DECLARATIONS
    */
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

    //Object Declarations:
    Assignment userAssignment; //Assignment object to store a new userAssignment
    Courses userCourse; //Courses object to store a new userCourse
    Student user; //Student object to store ALL student information

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
            
            user = createStudent();

        } else if(userChoice == 2){//add remove a course
            

            //variable for user choice:
            int choice;

            //Asking the user whether they would like to add a course or remove a course:
            cout << "\n\t\tWould you like to add a course or remove a course? (1 to add, 0 to remove): ";

            //branching based off user's choice to add or remove:
            switch(choice){

                case 1://add a course

                    break;
                case 0://remove a course
                    break;

            }//end of switch statemenet
            
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
