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
    //system("CLS");
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
        //system("CLS");
        cout << "\n\n\t\t\t|----------Menu----------|";
        cout << "\n\t\t------What would you like to do?-----";
        cout << "\n\t\t1. Create a New Student";
        cout << "\n\t\t2. View Student Info";
        cout << "\n\t\t3. View Course Info";//ask user to view individual course or all
        cout << "\n\t\t4. End Program";
        cout << "\n\t\t---------------------------------------------";

        //Taking in the user's choice:
        cout << "\n\n\t\tEnter your choice: ";
        cin >> userChoice;

        cin.ignore();

        //system("CLS");

        //Branching the user's choice:
        if(userChoice == 1){//create a new student
            
            user = createStudent();

            cout << "\n\n\t\tThe program is still running -> check 1\n";

            user.printStudentInfo();

        } else if(userChoice == 2){//view student info
            
            user.printStudentInfo();
            cout << "2";

        } else if(userChoice == 3){//view course info

            displayCourseInfo(user);
            cout << "3";
        } else {
            //Displaying goodbye message:
            cout << "\n\nClosing the program, have a great day!";
            break;
        }

        cout << "\n\n\n\t\tWould you like to open the menu again and continue? (y or n): ";
        cin >> flag;

    }//end of while loop

    cout << "\n\n\t\tClosing the program, have a great day!";

}//end of main function
