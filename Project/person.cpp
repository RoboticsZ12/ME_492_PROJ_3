#include <iostream>
#include <string>
#include <stdio.h>
#include "Person.h"
using namespace std;

// NEED TO DECLARE CONSTRUCTOR HERE
Person::Person(const int age, const string& name)
{
    age_ = age;
    name_ = name;
}

//*************************************************************************************//
// CALLING CLASS "Person", :: indicates inside this class, list the wanted function.   //
// SHOULD ALWAYS LIST THINGS AS CONSTANT, UNLESS HAVE A REALLY GOOD REASON.            //
//*************************************************************************************//

string Person::getname()
const{ 
    return name_;
}

int Person::getage()
const{
    return age_;
}

//****************************************************************************//
// IF USING "set", WILL NEED TO USE "VOID" TO DECLARE AS SEEN IN HEADER FILE. //
// USING CONST FOR THIS FUNCTION THROUGH AN ERROR WHEN USING CIN >> NAME.     //
//****************************************************************************//

void Person::setname(const string& name)
{
    name_ = name;
}

// reference is not needed for integers. 
void Person::setage(const int age)
{
    age_ = age;
}
