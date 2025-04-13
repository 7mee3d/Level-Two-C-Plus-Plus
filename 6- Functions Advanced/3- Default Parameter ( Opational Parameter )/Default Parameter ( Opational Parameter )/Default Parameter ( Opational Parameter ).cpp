// Default Parameter ( Opational Parameter ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int add(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d; 
}

int sub(int a, int b = 0, int c = 0); 

int main()
{
  //  cout <<add (10 ) <<endl // errror , Becouse not parameter b is has default parameter 

    cout << add(10, 10) << endl; 
    cout << add(10, 10 , 10 ) << endl; 
    cout << add(10, 10 , 10, 10  ) << endl; 

    cout << endl; 

    cout << sub(10, 10, 10) << endl;
        cout << sub(10, 10) << endl;
}


int sub(int a, int b , int c ) {
    return a - b - c; 
}