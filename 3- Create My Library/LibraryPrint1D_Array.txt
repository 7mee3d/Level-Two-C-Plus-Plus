#pragma once
#include <iostream>
using namespace std; 

string spaceBetweenElementArray(int number , int sizeArray ) {
	string spaceElement{""};

	if (number < sizeArray - 1)
		spaceElement += " , "; 

	return spaceElement; 
}

namespace printArray1D {

		// print array data type integer 

	void printArray1DInteger(int arrayInt[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayInt[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};

	void printArray1DShort(float arrayShort[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayShort[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};

	void printArray1DLongLong(long long int  arrayLongLong[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayLongLong[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};

	void printArray1DDouble(double arrayDouble[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayDouble[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};


	void printArray1Dfloating(float arrayfloat[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayfloat[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};

	void printArray1DString(string arrayString[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayString[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};

	void printArray1DCharacter(char arrayCharacter[], int& size) {

		cout << "[ ";

		for (int counter{ 0 }; counter < size; counter++) {
			cout << arrayCharacter[counter] << spaceBetweenElementArray(counter, size);
		}

		cout << " ]";
	};


}; 