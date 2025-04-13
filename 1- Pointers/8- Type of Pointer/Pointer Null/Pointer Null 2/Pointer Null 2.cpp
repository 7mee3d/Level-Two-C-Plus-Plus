

#include <iostream>
using namespace std;


int main()
{
    // type two null pointer 

    int number = 100;

    
   // int* pointer;
   // uninilization pointer 
  // cout << pointer << endl;


   // to solve warring or error using ( default pointer null ) 

    int* pointer1 = nullptr;
    int* pointer2 = NULL;
    int* pointer3 = 0; 

    // this is default pointer is empty not including value 

    cout << pointer1 << endl; 
    cout << pointer2 << endl; 
    cout << pointer3 << endl; 

    // print 0000000000000000 

    // cheak pointer is empty 


    if (pointer1 == nullptr)
        cout << "The Pointer 1 is empty \n";

    if (pointer2 == nullptr) 
        cout << "The Pointer 2 is empty \n";

    if (pointer3 == nullptr)
        cout << "The Pointer 3 is empty \n";


    cout << "Thanks \n"; 
}

