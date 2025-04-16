
#include <iostream>
#include "I:\\Programming part 2\Level Two C-Plus-Plus\\3- Create My Library\Introducation create my library\\Introducation create my library\Test_Libaray.h"

using namespace myLibReadElementsArray;
using namespace std; 

int main()
{
	int sizeArray{};

	cout << "Enter the Size Array : "; 

	cin >> sizeArray;

	int* array = new int[sizeArray]; 

	readElementsInArrayToSAtoreInteger(array, sizeArray); 


	for (int i = 0; i < sizeArray; i++)
		cout << *(array + i) << endl; 

	delete[]array; 

}

