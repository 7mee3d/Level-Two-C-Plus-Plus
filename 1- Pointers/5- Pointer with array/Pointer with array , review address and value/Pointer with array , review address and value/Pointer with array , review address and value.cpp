

#include <iostream>
using namespace std; 

int main()
{
    int array[3] = { 1, 2, 3 }; 

    int* pointerarray;
     pointerarray = &array[0];
    

    cout << "Address element 1 in the array : " << pointerarray << endl; 
    cout << "Address element 2 in the array : " << pointerarray + 1  << endl; 
    cout << "Address element 3 in the array : " << pointerarray + 2  << endl; 

    cout << endl << endl; 

    cout << "The Value elemnt 1 in the array using pointer : " << *(pointerarray) << endl;
    cout << "The Value elemnt 2 in the array using pointer : " << *(pointerarray + 1) << endl;
    cout << "The Value elemnt 3 in the array using pointer : " << *(pointerarray + 2) << endl;

}

