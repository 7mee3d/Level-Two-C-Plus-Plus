// Vector With Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std; 

struct Person {

    int  age; 
    string name; 

};


int main()
{
    vector <Person > vec; 
    Person  p; 

    p.name = "Ahmed Jehad ";
    p.age = 20; 

    vec.push_back(p); 

    p.name = "Ali ";
    p.age = 21; 

    vec.push_back(p);


    for (Person& per : vec) {
        cout << per.name << endl; 
        cout << per.age << endl; 
    }

}

