// Pointer part three ( part two type of pointer ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int functionAdditionNumbers(int number1, int number2) {
    return number1 + number2; 
}


int main()
{
   // pointer to function type 

    //syntax [ return type function pointer ] ( * name pointer ) ( parameter function ) = [ name function ]  ;

    int (*pointer_to_function) (int,int) = functionAdditionNumbers;

    int result = pointer_to_function(10, 10);

    cout << "Result addition two number : " << result(10, 10) << endl;
}

