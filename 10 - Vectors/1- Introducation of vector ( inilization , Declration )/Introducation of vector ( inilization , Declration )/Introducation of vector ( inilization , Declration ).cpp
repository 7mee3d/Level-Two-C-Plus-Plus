// Introducation of vector ( inilization , Declration ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>  
using namespace std; 
int main()
{
  // [[maybe_unused]] vector <int> vector1; // declration 

   //[[maybe_unused]]  vector <int> vector2(5); // vector all elements is zero 

  // [[maybe_unused]]  vector <int> vector3(5, 10); // vector the 5 eleemnts is value is 10 

    vector <int> vector4 = { 10 ,28 ,33 }; // inilization 


    for (int & i : vector4) {
        cout << i << endl; 
    }

}

