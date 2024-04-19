#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
// CALLING CONSTRUCTOR WITHIN Person.h
Person personclass(22, "Zechariah G.");

// INITIAL SET CONSTRUCTOR OUTPUTS 
cout << "The chosen age: " << personclass.getage() << endl;
cout << "The chosen name: " << personclass.getname() << endl;

// CHANGED NAME AND AGE FROM THE INITIAL CONSTRUCTOR. 
personclass.setname("Georgian");
personclass.setage(23);

cout << "The changed chosen name: " << personclass.getname() << endl;
cout << "The changed chosen age: " << personclass.getage() << endl;

return 0;
}

    //***********************************************************************************//
    // CREATE AN INSTANCE FOR PERSON CLASS IN .H                                         //
    // SYNTAX:                                                                           //
    // personclass(const int, const string&)                                             //
    // NOTE: you must use this syntax if you initialize the constructor in the class.    //
    // if you try to initialize the instance like:                                       //
    // Person personclass;                                                               //
    // personclass("john", 30);                                                          //
    // then you are assuming that you are using the defualt constructor, or you did not  //
    // create the constructor. If you did not create the constructor in the class,       //
    // then the syntax above would compile correctly. If you did define a constructor,   //
    // then the syntax used MUST be used.                                                //
    //***********************************************************************************//
