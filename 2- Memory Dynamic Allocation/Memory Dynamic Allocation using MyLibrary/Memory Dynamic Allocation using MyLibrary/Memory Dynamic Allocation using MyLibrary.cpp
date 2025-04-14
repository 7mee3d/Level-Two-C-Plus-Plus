#include <iostream>
#include "I:\\Programming part 2\Level Two C-Plus-Plus\3- Create My Library\Introducation create my library\Introducation create my library\Test_Libaray.h"

using namespace std;

int main() {
	int sizeArray;
	cout << "Enter the Size Array , Sir : ";
	cin >> sizeArray;

	int* array;
	array = new int[sizeArray];

	myLibReadElementsArray::readElementsInArrayToSAtoreIntegerDynmaic(array, sizeArray);

}