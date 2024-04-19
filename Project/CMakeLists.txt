cmake_minimum_required(VERSION 3.22.1)
project(PROJ3)

# DECLARING A "set" helps organize the main src files. 
# Especially if you have more than one src program. 
# This line assigns all the .cpp files under the 
# variable name SOURCE. can use this in the executable. 
set(SOURCES person.cpp main.cpp)

# add_executable(my_project main.cpp person.cpp)
add_executable(my_project ${SOURCES})

install(TARGETS my_project DESTINATION bin)
# SYNTAX:
# install(TARGETS "executable_name" "Name where to install this")
# This is used to take the executable and download its contents to the "bin" file
