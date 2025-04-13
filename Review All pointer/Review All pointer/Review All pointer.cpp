// Review All pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int stativVraible(int* number) {
	(*number)++; 
	return (*number); 
}

void fill(int* arr[2]) {

	for (int i = 0; i < 2; i++) {
		cin >> *(arr + i); 

	}
}
int main()
{
	//int a = 10;
	//void* p = &a; 
	//cout << p << endl; 
//	cout << (static_cast <int*> (p)) <<endl;
	//int n = *(static_cast <int*> (p));

	int number = 1; 
	/*
	cout << stativVraible(&number) << endl;
	cout << stativVraible(&number) << endl;
	cout << stativVraible(&number) << endl;
	cout << stativVraible(&number) << endl;
	cout << stativVraible(&number) << endl;*/


	vector <int> arr{ 1, 2 };
	for (auto i = arr.begin(); i != arr.end(); i++) {
		cout << &(*(i)) << endl;
	}

}

