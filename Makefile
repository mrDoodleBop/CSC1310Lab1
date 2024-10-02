#######################################
# Makefile for the GitWorkin! Project #
#######################################

# By default, make will run the first target in the list. 
# typing make all will run the command to "make all"
# both of these work with this makefile since it is places at the top

all					: GitWorkin


GitWorkin           : gitWorkinDriver.cpp Assignment.cpp Courses.cpp gitWorkinFunctions.cpp Student.cpp
					g++ *.cpp


clean				: rm a.exe