// Automatic variable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void print_1_to_5(void) {
    for (auto i{ 1 };i <= 5; i++)
        cout << i << endl; 
}

void increamentVariableAuto(void) {
    static auto x = 1; 
    cout << x++ << endl; 
}
int main()
{
    auto x = 10; 
    auto y = "Ahmed"; 
    auto c = 'a'; 
    auto j = 15.5; 


    cout << x << endl; 
    cout << y << endl; 
    cout << c << endl; 
    cout << j << endl; 

    cout << endl << endl; 

    print_1_to_5();

    cout << endl << endl;

    increamentVariableAuto();
    increamentVariableAuto();
    increamentVariableAuto();
    increamentVariableAuto();

}


