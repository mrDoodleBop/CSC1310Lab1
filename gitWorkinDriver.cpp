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
        cout << "\n\n\t\t\t|----------Menu----------|";
        cout << "\n\t\t------What would you like to do?-----";
        cout << "\n\t\t\t\t1. Create a New Student";
        cout << "\n\t\t2. Add a Course";
        cout << "\n\t\t3. Add an Assignment to a course";
        cout << "\n\t\t4. End Program";
        cout << "\n\t\t---------------------------------------------";

        //Taking in the user's choice:
        cout << "\n\n\t\tEnter your choice: ";
        cin >> userChoice;

        //Branching the user's choice:
        if(userChoice == 1){
            cout << "1";
        } else if(userChoice == 2){
            cout << "2";
        } else if(userChoice == 3){
            cout << "3";
        } else {
            //Displaying goodbye message:
            cout << "\n\nClosing the program, have a great day!";
            break;
        }

        cout << "The program is still running!";


    }//end of while loop

}//end of main function
