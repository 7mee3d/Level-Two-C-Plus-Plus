#pragma once
#include <array>
#include <iostream>
#include <string> 

using namespace std;

unsigned short int kZERO{ 0 };
unsigned short int kONE{ 1 };

namespace myLibReadElementsArray {

	//- Arrray static read Numbers -//


	//array is type integer to store elements in array and return array is filled elements 

	int readElementsInArrayToSAtoreInteger(int array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		return array[size];
	}


	short int  readElementsInArrayToSAtoreShortInteger(short int array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		return array[size];
	}

	long long int readElementsInArrayToSAtoreLongLongInteger(long long int array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		return array[size];
	}

	float readElementsInArrayToSAtoreFloatingPoint(float array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		//Converting elemnts in the type floating 
		//Type Casting Modern ( Using static_Cast ) 
		for (int counter{ ::kZERO }; counter < size; counter += ::kONE)

			array[counter] = static_cast <float>(array[size]);

		return array[size];
	}

	double readElementsInArrayToSAtoredouble(double array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		return array[size];
	}


	string readElementsInArrayToSAtoreStringConnotSpacing(string array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> array[counter];
		};

		return array[size];
	}


	string readElementsInArrayToSAtoreStringWithSpacing(string array[], int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			getline(cin, array[counter]);

		};

		return array[size];
	}



	// Array Dynmaic Using pointer ( Memory Dynmaic Allocation ) 



	int readElementsInArrayToSAtoreIntegerDynmaic(int* arrayInteger, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayInteger + counter);
		};

		return arrayInteger[size];
	}


	short int  readElementsInArrayToSAtoreShortIntegerDynmaic(short int* arrayShortI, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayShortI + counter);
		};

		return arrayShortI[size];
	}

	long long int readElementsInArrayToSAtoreLongLongIntegerDynmaic(long long int* arrayLLI, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayLLI + counter);
		};

		return arrayLLI[size];
	}

	float readElementsInArrayToSAtoreFloatingPointDynmaic(float* arrayFloating, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayFloating + counter);
		};

		//Converting elemnts in the type floating 
		//Type Casting Modern ( Using static_Cast ) 
		for (int counter{ ::kZERO }; counter < size; counter += ::kONE)

			*(arrayFloating + counter) = static_cast <float>(*(arrayFloating + counter));

		return arrayFloating[size];
	}

	double readElementsInArrayToSAtoredoubleDynmaic(double* arrayDouble, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayDouble + counter);
		};

		return arrayDouble[size];
	}


	string readElementsInArrayToSAtoreStringConnotSpacingDynmaic(string* arrayString2, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			cin >> *(arrayString2 + counter);
		};

		return arrayString2[size];
	}


	string readElementsInArrayToSAtoreStringWithSpacingDynmaic(string* arrayString, int& size) {

		cout << endl << "Enter the Elements to store array \n";

		for (int counter{ ::kZERO }; counter < size; counter += ::kONE) {

			getline(cin, *(arrayString + counter));

		};

		return arrayString[size];
	}

};