// pointer with structure part 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


struct student {
    string name = "ahmed";
    int ID = 120 ; 

};


int main()
{
    student st1; 
    student* Pointer; 

    Pointer = &st1; 

    //Pointer->name = "Ahmed"; 
    //Pointer->ID = 120;


    cout << Pointer->name << endl; // cout << (*pointer).name <<endl; 
    cout << (*Pointer).name <<endl;

    cout << Pointer->ID << endl; 

}

