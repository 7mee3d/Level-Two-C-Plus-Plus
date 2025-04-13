
#include <iostream>
using namespace std;

int additionFunction(int number1, int number2) {

    int result = number1 + number2; 
    return result; 
}

void FunctionMulitplying(void) {

    int num1{ 0 }, num2{ 0 }; 
    cout << "\n\nEnter the number 1 Function two : ";
    cin >> num1;
    cout << "Enter the number2  Function two : ";
    cin >> num2;

    cout << "\nThe Result is Multiply : " << num1 * num2 << endl; 

}
int main()
{
    // using pointer to function 

    int number1{ 0 }, number2{ 0 }; 

    cout << "Enter the number 1 Function one : "; 
    cin >> number1; 
    cout << "Enter the number2 Function one : "; 
    cin >> number2; 
    
    /*
    * 
    Syntax pointer to function 

        [data type returing function ] (* New Name Function Pointer ) ( Parameters ) = [Name Function old ] ; 

    */

    int (*FunctionAddTwoNumbers) (int, int) = additionFunction; 

    // print result using pointer Function 

    cout << "\n\nThe result of add two numbers is = " << FunctionAddTwoNumbers(number1, number2) << endl;


    // void retruing function 
    void (*FunctionMulti) (void) = FunctionMulitplying;

    FunctionMulti();
}

