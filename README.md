# GitWorkin!
# Collaborating Group Name : Git Gang
# Date Created : 9/11/2024
# 
# Project will be turned in for lab 1 in CSC1310
# 
# Purpose of the program is to act as a planner/ to-do list application for students
# *****QUESTION FOR THE GROUP: when we are finished with the program, if we have more time, should we add functions into the program that write the user's student, course, and assignment
#                              information to a text file that can be saved to their computer? I feel like this would add more realism to the program. It could make it something that is       #                              actually functional and useful in real life
# 
# 
#   Classes to be used:
#   --> each class will have its own definition file and header file
#       1. COURSES:
#           - Attributes:
#               a. string Name  
#               b. string section
#               c. double grade
#               d. Assignment vector pointing to a list of assignments
#           - Methods:
#               a. void printCourseInfo()
#               b. void printAssignments()
#               c. void addAssignment()
#               d. void removeAssignment() //does not take an index, but rather calls printAssignments() and asks the user to pick which # 
#                                          assignment to remove
#               e. void updateGrade()
# 
#       2. Assignment:
#           - Attributes:
#               a. string Name
#               b. string due date (mm/dd/yyyy)
#               c. integer priority level (1-5)
#               d. notes (limited to 75 characters)
#           - Methods:
#               a. void updatePriority()
#               b. void amendNotes()
#               c. void changeDueDate()
#               d. void deleteAssignment()   
# 
#       3. Student:
#           - Attributes:
#               a. string Name
#               b. int age 
#               c. string year (freshman, sophomore, etc.)
#               d. Course vector pointing to a list of courses 
#           - Methods:
#               a. void printStudentInfo()
# 
#   Functions File:
# 
# 
#   Driver file:
#       --> This is the main file that the program will be run off of. The user should be able to compile the driver file alone and the program work #           as intented
#
#       - This file will run off of a main loop that runs so long as the user wants it to, and stops when the user tells it to
#           - This will be done using a while loop using characters 'y', 'Y', 'n', or 'N' as the condition flags
#
#       1. The program begins by asking the user if they would like to set up a student data base to begin working on their planner
#           -> If the user says yes, then the program will continue, otherwise, it will stop and display a goodbye message
# 
# 
# 
#   Individual Collaborator Roles:
#     1. Michael Cates
#           - Student Class, Course Class Files, and Driver File
# 
#     2. Mackenzie Raleigh 
#           - 
# 
#     3. Nino Chindavanh 
#           - Function file and Assignment Class




