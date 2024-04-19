#pragma once 
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // CREATING A CONSTRUCTOR
    Person(const int age, const string& name);

    //----------------------------------------------------------           //
    // NOTE: IF USING THE "set" KEYWORD, USE A "VOID" and "&".             //
    // SET IS USED TO CHANGE A STRING VALUE IN MEMORY. YOU NEED            //
    // TO REFERENCE THE POINT IN MEMORY TO CHANGE.                         //
    // SYNTAX:                                                             //
    // void "set"_NAME_OF_FUNCTION("const" type&(reference) variable_name) // 
    void setname(const string& name);
    void setage(const int age);

    //  NOTE: IF USING THE "get" KEYWORD, NO NEED FOR "VOID". 
    // JUST SIMPLY SET THE WANTED VARIABLE. 
    int getage() const;  
    string getname() const;

    // MUST DECLARE AS PRIVATE SO THESE VARIABLES ARE ONLY CHANGEABLE IN THE CLASSV "PERSON"
private:
    int age_;
    string name_;
};
