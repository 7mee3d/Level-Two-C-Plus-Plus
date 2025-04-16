

#include <iostream>
using namespace std; 

int FactorialNumber(int number) {

    int fact{ 1 };
    //Ending point ( base case ) 
    if (number == 1)
        return 1;
    else
        // call stack 
        //Recursion
        fact = fact * number * FactorialNumber(number - 1);

    return fact;

}
int main()
{
    cout << FactorialNumber(5);
}

