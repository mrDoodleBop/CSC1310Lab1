# GitWorkin!
# Collaborating Group Name : Git Gang
# Date Created : 9/11/2024
# 

Collaborators: Michael Cates (group leader), Nino Chindavanh, and Mackenzie Raleigh
Group Name: GitGang
Program Release Date: Friday, October 4, 2024
Course: CSC 1310-104
 

OVERVIEW
Our program acts as a simple student database in which a new user may add their student information, courses, and respective tasks that can be tracked and viewed to allow them access the highest level of productivity with the pleasure of user friendliness.
Our project utilizes programming concepts such as Classes, arrays, branching, iteration, input validation, and abstraction as well as in depth back end commenting on the structure and workflow that ensures third party convenience in analytical and critical review. 
This documentation will thoroughly elaborate on the inner workings of the program to assist in participation, critique, and further development of GitWorkin!.
Please reach out to the team of collaborators with any questions, suggestions, or concerns.

PROGRAM FLOW
GitWorkin! utilizes a hierarchical flow of C++ abstract data structures to allow for a smooth flow of user information and data organization. This primarily includes the use of three classes – Student, Courses, and Assignment – that triages the user’s input into a student transcript. 
Once the program is compiled and the executable has been initiated, the user will be asked whether to create their student database or exit. 
After the user chooses to begin on their database, they have the option to create their initial student information or display default information. This is to allow the user to visualize how their information will be stored and organized ensuring user friendliness. 
The hierarchical structure of the program that follows is as such:
1.	Creation of a Student class object
a.	Student class sits as the top of the flow, eventually holding all data entered into the program
b.	This is the first object to be created

2.	Creation of 5 Courses class objects
a.	The Courses class is second in command in the flow of the program, holding the information for one course and its respective assignments
b.	This is the second object that will be created
c.	Five Courses objects are created inside of the Student object

3.	Creation of 5 Assignment class objects
a.	The Assignment class is at the bottom of the chain, holding only information for an assignment and MAY or MAY NOT be created throughout the flow of the program
b.	This is the third object that is defined 
c.	For every Courses object that is defined, either five or zero Assignment objects are created
The entirety of the project can be summarized into these three Classes. They flow into each other from bottom to top and are defined from top to bottom. 

CLASSES BREAKDOWN
Each of the classes in this project are simple to break down into their moving pieces. They create a fairly straightforward flow of data storage and retrieval. 
Student Class
Private Storage:
1.	User’s name
2.	User’s age
3.	User’s year in school
4.	Number of Courses 
5.	Array of objects of Courses type
a.	The list of the user’s courses, always set to the length of five
Public Storage:
1.	Default constructor method:
a.	Name: John Doe
b.	Age: eighteen
c.	Year in school: one
d.	Array of Courses:
i.	Five default courses (the default constructor for the Courses class is covered below this class
2.	Overloaded constructor method:
a.	All data is set to user input
Methods:
1.	printStudentInfo()
a.	Displays all Student information, including the private data in the Student object as well as all Course and Assignment information, in an easy to read and organized format

2.	getUserCourses()
a.	Displays only the user’s course information in an easy to read and organized format

3.	returnUserCourses()
a.	returns a pointer to the array of the user’s courses that can be used later in the program

4.	getUserName()
a.	Returns the user’s name

5.	getUserAge()
a.	Returns the user’s age

6.	getUserYear()
a.	Returns the user’s year in school

7.	setUserName()
a.	Sets the user’s name to the input passed through the function

8.	setUserAge()
a.	Sets the user’s age to the input passed through the function

9.	setUserYear()
a.	Sets the user’s year in school to the input passed through the function
Courses Class
Private Storage:
1.	Course name
2.	Course section
3.	User’s current grade in the course
4.	Number of assignments
5.	Array of objects of Assignment type 
a.	List of user’s assignments, always set to the length of 5
Public Storage:
1.	Default constructor method:
a.	Course name: N/A
b.	Course section: N/A
c.	Current grade in the course: 0.0
d.	Array of assignments:
i.	Each element is set to the default assignment constructor (the Assignment class is covered below)
Methods:
1.	getName()
a.	returns the Course name

2.	getSection()
a.	returns the Course section

3.	getGrade()
a.	returns the Course grade

4.	printCourseInfo()
a.	displays all Course information, including the array of Assignment objects, in an organized and easy to read format

5.	setCourseName()
a.	sets the Course name to the input passed through the function 

6.	setCourseSection()
a.	sets the Course section to the input passed through the function

7.	setCourseGrade()
a.	sets the current grade in the Course to the input passed through the function




Assignment Class:
Private Storage:
1.	Assignment name
2.	Assignment due date
3.	Assignment priority level
4.	Assignment notes
Public Storage:
1.	Default constructor method:
a.	Name: N/A
b.	Due Date: N/A
c.	Priority Level: 1

2.	Overloaded constructor method:
a.	All data is set to the user input passed through the function
Methods:
1.	getInfo()
a.	Displays the assignment info in an organized and easy to read format for the user
2.	getName()
a.	returns the Assignment name
3.	getDueDate()
a.	returns the Assignment due date
4.	getPriorityLevel()
a.	returns the Assignment priority level
5.	getNotes()
a.	returns the Assignment notes
6.	setName()
a.	sets the Assignment name to the value of the input passed through the function
7.	setDueDate()
a.	sets the Assignment due date to the value of the input passed through the function
8.	setPriorityLevel()
a.	sets the Assignment priority level to the value of the input passed through the function
9.	setNotes()
a.	sets the Assignment notes to the value of the input passed through the function




-	Found below is a visual aid to assist in understanding the hierarchical flow of classes in our program:
Student
String name
Int age
Int year
Courses[] enrolledCourses

printStudentInfo()
getUserCourses()
returnUserCourses()
getUserAge()
getUserYear()
getUserName()


Courses
String name
String section
Double currentGrade
Int numAssignments
Assignment[] assignments

getName()
getSection()
getgrade()
printCourseInfo()
setCourseName()
setCourseSection()
setCourseGrade()
					
	
						
Courses
String name
String section
Double currentGrade
Int numAssignments
Assignment[] assignments

getName()
getSection()
getgrade()
printCourseInfo()
setCourseName()
setCourseSection()
setCourseGrade()




FUNCTIONS BREAKDOWN
Our program also utilizes separate functions that assist in the abstraction of the tasks performed. Like the classes, the abstracted work is separated into the pieces: createCourse(), createAssignment(), and createStudent(). Even further in their similarities to the flow of the classes, each function houses a call to the next one down on the hierarchical ladder. 
The createStudent Function:
-	This function takes no parameters, but returns an object of the Student class. The call to this function is housed in the driver file, under the first branching case (the place where the program tests the user’s input). Typically this is the first thing that is completed when the program has been started by the user. 
-	The function takes in the user’s student information (name, age, and year) as well as the user’s courses
-	After taking in the student’s information, the createStudent function calls the createCourse function, returning a single Courses object, which is then added to the userCourses[] array
-	Once all the user’s information and courses have been collected, the program creates an object of the Student class using all of the new data
The createCourse Function:
-	This function takes no parameters, but returns an object of the Courses class. The call to this function is housed in the createStudent function
-	It begins by taking the course information from the user (name, section, and current grade) as well as the user’s assignments for this course
-	After accepting the user’s information for the course, the createAssignment function is called, returning a single Assignment object, which is then added to the currentAssignments[] array
-	Once all the user’s course information and list of assignments have been collected, the program creates an object of the Courses class using all of the new data and returns this object back to where it was called in the createStudent function and added into the userCourses[] array
The createAssignment Function: 
-	This function takes no parameters, but returns an object of the Assignment class. The call to this function is housed in the createCourse function
-	It begins by taking the assignment information for the user (name, due date, priority level, and notes)
-	After accepting the user’s information for the assignment, the program then creates an object of the Assignment class and returns it back to the createCourse function where the assignment is added to the currentAssignments[] array

THE DRIVER FILE
This file is where the program comes to life. It begins with displaying a small intro message to the user and then asking if the user would like to begin creating their student database.
-	Off of the user’s choice, the program begins a while loop that displays a menu to the user, asking them what task they would like to perform:
o	Create a Student
o	View Student Information
o	View Course Information
-	The program then begins a branching statement picking the task to perform based off of the user’s choice
-	After performing the instructed task, the program asks the user if they would like to view the menu again or exit the program
o	If the user decides to view the menu again, they go through the process all over again
o	If the user decides not to view the menu again, the program displays a short closing message and exits


GITWORKIN! DEVELOPMENT PROCESS EXPLAINED
 This program was written by a small team of three student programmers using git and the GitKraken client. Throughout the development process, we found a variety of development methods, programming practices, and other small programming tasks that both did and did not work for us as a group. 
1.	GROUP WORK
a.	To begin, this program was a ton of fun to create and the shear size of it as compared to previous programs developed in CSC 1300 was both daunting and exciting at the same time. 
b.	While it was extremely time-consuming having group members to create a division of labor with was something that could not be taken for granted, and it wasn’t. 
c.	The biggest area for improvement with this style of programming for students this early that we found was as follows:
i.	In CSC 1300, we were required to work independently on the most difficult and time-consuming projects that the course offered, while, in lab, we were advised to work in “paired-programming” groups.
ii.	Going from that course structure to this, without warning, has proven to be extremely difficult at times due to the dramatic change in work environments and requirements
iii.	Everyone needs to be able to work in groups and the best way to improve on groupwork skills is to practice, but we believe that in the future, the people leading the course or the labs may help advise or guide us through programming larger projects in groups. 
d.	With a little more help with working in groups, developing divisions of labor, and how to figure out inevitable knowledge gaps between team members, we believe this course structure has limitless potential and find ourselves looking forward to the next project

2.	GIT/ GITKRAKEN
a.	Working on this project, we as a group understand that we aren’t expected to be professionals with git and/ or the GitKraken client. It was interesting to learn, fun to use, and always nice to have a new certification to add to our resumes. 
i.	We also believe that without using git/ GitKraken, this project would have been near impossible to develop both efficiently and effectively; we would have had to choose between quality and quantity.
b.	With that being said, we believe further instruction and assistance with learning git is something that is going to be extremely important throughout the rest of the semester to ensure that all students have a high chance of being successful. 
i.	Learning the ideas of git and GitKraken as well as earning the certification for using it were both extremely easy, but we noted that putting our newfound knowledge into practice was profoundly more difficult than what was expected. 
c.	We believe that one method to better prepare students for using git and/ or GitKraken on a project this size after learning it so soon beforehand, a couple of practice assignments or test cases using the software will help future students better understand better practices and workflows to ensure project success.

3.	Expected Outcomes vs Reality
a.	Going into this project, we as a group expected our development process to run smoother than it actually did in reality. 
b.	In the future, we plan to work on communication, organization, and consistency skills:
i.	Communication: throughout the development of this project communication was not a major problem for our productivity, but it is definitely something that could use improvement going forward.
ii.	Organization: whether it was with using git, working on the readme, or even organizing code, there were a few times throughout the course of this project where things got messy and we had to play clean up. It was something that we were able to come back from and are excited to work on moving forward through the course.


ADDITIONAL INFORMATION
At the end of the day, this project was both challenging and exciting at the same time. We believe that this course structure forces us to learn more efficiently than the previous approach to lab and that makes us very excited for future projects. Our thoughts and concerns for both this projects and future ones, found on the previous page, are not complaints and not meant to be taken as offensive or hateful. 
They are simply things that we noticed throughout the course of the past month working on this project and we believe that, once small things are developed, this approach to lab is a wonderful idea. It is much like a program still in its development stages. We had a test run, found what works and what did not. We found some bugs and now it is time to debug, fix some issues, make some changes and then re-run. Nothing is ever perfect on its first run and we understand that in a way we are the guinea pigs. We are here for it all and cannot wait to see how it develops in the future. 

TESTING THE PROGRAM
In order to run the program, we found it is much easier to just pass the g++ *.cpp command through the CMD. To run the test cases just run the a.exe < <TEST_CASE_NAME.txt> command in the comment prompt. 
The program was originally intended to clear the command prompt to create an illusion of transferring to a new screen for a new task but those System(“CLS”) commands were commented out for convenience in reading the output when using test case files.rt
