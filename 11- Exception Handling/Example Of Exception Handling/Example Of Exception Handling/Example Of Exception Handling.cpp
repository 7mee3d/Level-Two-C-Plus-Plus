
#include <iostream>
#include <vector>
using namespace std; 


int main()
{

    vector <int> vec{ 1 , 2 , 3  , 4 , 5 };
    //index           0 , 1 , 2 ,  3 ,  4 

    cout << "The Size Of Vector = " << vec.size() << endl; 
    cout << endl; 


    for (int& i : vec) {
        cout << i << ' ';
    }
    cout << endl; 


   // cout << vec.at(5) << endl; // error out of range 
    // to solve exception using exception handling 
    cout << endl; 
    try {
        cout << vec.at(5) << endl;
    }
    catch (...) {
        cout << "Out of range is vector \n"; 
    }



    
}

