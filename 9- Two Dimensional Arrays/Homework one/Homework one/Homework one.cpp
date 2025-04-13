// Homework one.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
using namespace std; 

string tabes(int number) {

	string t{ "" }; 
	for (int i{ 1 }; i <= number; i++)
		t += '\t';

	return t; 
}
void Header(void) {

	cout << tabes(4)<< "|----------------------------------------------------------------------------|\n";
	cout << tabes(4)<< "|   ------------------- ++ Tabel Multiplication ++ ------------------------  |\n";
	cout << tabes(4)<< "|----------------------------------------------------------------------------|\n";

}

void multiplicationArray (int array [10] [10 ]) {

	for (int i{ 0 }; i < 10; i++) {
		for (int j{ 0 }; j < 10; j++) {
			array[i][j] = (i+1) * (j+1); 
		}
	}



	
	
}

void print2Darray(int array[10][10]) {

	for (int i{ 0 }; i < 10; i++) {
		cout << tabes(4); 
		for (int j{ 0 }; j < 10; j++) {
			cout << left <<  setw(2) << '|';
			printf("%03d", array[i][j]); 
			cout << left <<  setw(3) << '|';
 		}
		cout << endl; 
	}
}
void footer(void) {

	cout << tabes (4)  << "|----------------------------------------------------------------------------|\n";
}

void Print2D_UsingFormating(int array[10][10]) {
	Header();
	multiplicationArray(array);
	print2Darray(array);
	footer(); 
}
void Print2D_UsingNotFormating(int array[10][10]) {
	
	multiplicationArray(array);
	for (int i{ 0 }; i < 10; i++) {
		cout << tabes(4);
		for (int j{ 0 }; j < 10; j++) {
		
			printf("%02d  ", array[i][j]);
	
		}
		cout << endl;
	}
	
}

int main()
{
	
	int array[10][10]; 
	cout << tabes (4) << " Using formating \n\n";

	Print2D_UsingFormating(array); 


	cout << "\n\n\n \t\t\t\tusing not formating \n\n";
	Print2D_UsingNotFormating(array);
}

