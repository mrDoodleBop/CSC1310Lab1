/*
    File Name : gitWorkinDriver.cpp
    Author Name : Michael Cates
    Purpose : Main file for the GitWorkin! program
*/

#include "Student.h"
#include "Courses.h"


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

       


        //Displaying goodbye message:
        cout << "\n\nClosing the program, have a great day!";


    }//end of while loop

}//end of main function
