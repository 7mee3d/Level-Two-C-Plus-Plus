// Removing  part with structure ( pop ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std; 

struct Person {
    string name; 
    int age; 
};

int main()
{
    vector < Person> vec; 

    Person p; 

    p.name = "Ahmed";
    p.age = 20; 

    vec.push_back(p); 

    p.name = "Jehad";
    p.age = 30;

    vec.push_back(p);

    vec.pop_back();

    int counter = 1; 

    for (Person& pp : vec) {
        cout << "The Person number [ " << counter++ << " ] \n"; 
        cout << pp.name << endl; 
        cout << pp.age << endl; 
        cout << endl; 

    }

}
