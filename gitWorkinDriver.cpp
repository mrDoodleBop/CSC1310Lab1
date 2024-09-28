/*
    File Name : gitWorkinDriver.cpp
    Author Name : Michael Cates
    Purpose : Main file for the GitWorkin! program
*/


#include "gitWorkinFunctions.h"//outside functions header file
//#include "Student.h"//Student class header file
//#include "Courses.h"//Courses class header file
//#include "Assignment.h"//Assignment class header file




//main function:
int main(){

    //This object will hold all student, course, and assignment data throughout the entire program:)
    Student user;

    //Variable declarations:
    char flag;

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
            
            user =  createStudent();

            cout << "\n\n\t\tThe program is still running -> check 1";

            user.printStudentInfo();

        } else if(userChoice == 2){//add remove a course
            

            //variable for user choice:
            int choice;

            //Asking the user whether they would like to add a course or remove a course:
            cout << "\n\t\tWould you like to add a course or remove a course? (1 to add, 0 to remove): ";
            cin >> choice;

            system("CLS");

            //branching based off user's choice to add or remove:
            switch(choice){

                case 1://add a course

                    //GITWORKINFUNCTIONS_H::addCourse(user);

                    break;
                case 0://remove a course

                    //GITWORKINFUNCTIONS_H::removeCourse(user);

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

        cout << "\n\n\t\tThe program is still running! -> check 2";
    }//end of while loop

}//end of main function
