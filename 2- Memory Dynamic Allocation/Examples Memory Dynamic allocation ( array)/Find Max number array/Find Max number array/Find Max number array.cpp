

#include <iostream>
using namespace std; 

int readNumberPositive(string const message) {
    int number{};
    do {
        cout << message; 
        cin >> number; 
    } while (number < 0); 

    return number; 
}

int maxNumberArray(int* arr, int * size) {

    int* maxNumber = arr; 

    for (int i = 0; i < *size - 1 ; i++) {
        if (*(maxNumber) < *(arr + i + 1))
            *maxNumber = *(arr + i + 1);
    }

    return *(maxNumber); 

}

int main()
{
    int * sizeArray = new int ; 
    *sizeArray = readNumberPositive("Enter the Size Of Array , Please : "); 

    int* array = new int[*sizeArray]; 

    for (int i = 0; i < *sizeArray; i++) {
        cin >> *(array + i); 

    }

    cout << endl; 
    cout << maxNumberArray(array, sizeArray); 

    delete[]array , sizeArray; 

}

