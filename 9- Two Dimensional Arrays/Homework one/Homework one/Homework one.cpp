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


/*			The Output of the code Finialy 

					 Using formating 

				|----------------------------------------------------------------------------|
				|   ------------------- ++ Tabel Multiplication ++ ------------------------  |
				|----------------------------------------------------------------------------|
				| 001|  | 002|  | 003|  | 004|  | 005|  | 006|  | 007|  | 008|  | 009|  | 010|  
				| 002|  | 004|  | 006|  | 008|  | 010|  | 012|  | 014|  | 016|  | 018|  | 020|  
				| 003|  | 006|  | 009|  | 012|  | 015|  | 018|  | 021|  | 024|  | 027|  | 030|  
				| 004|  | 008|  | 012|  | 016|  | 020|  | 024|  | 028|  | 032|  | 036|  | 040|  
				| 005|  | 010|  | 015|  | 020|  | 025|  | 030|  | 035|  | 040|  | 045|  | 050|  
				| 006|  | 012|  | 018|  | 024|  | 030|  | 036|  | 042|  | 048|  | 054|  | 060|  
				| 007|  | 014|  | 021|  | 028|  | 035|  | 042|  | 049|  | 056|  | 063|  | 070|  
				| 008|  | 016|  | 024|  | 032|  | 040|  | 048|  | 056|  | 064|  | 072|  | 080|  
				| 009|  | 018|  | 027|  | 036|  | 045|  | 054|  | 063|  | 072|  | 081|  | 090|  
				| 010|  | 020|  | 030|  | 040|  | 050|  | 060|  | 070|  | 080|  | 090|  | 100|  
				|----------------------------------------------------------------------------|



 				using not formating 

				01  02  03  04  05  06  07  08  09  10  
				02  04  06  08  10  12  14  16  18  20  
				03  06  09  12  15  18  21  24  27  30  
				04  08  12  16  20  24  28  32  36  40  
				05  10  15  20  25  30  35  40  45  50  
				06  12  18  24  30  36  42  48  54  60  
				07  14  21  28  35  42  49  56  63  70  
				08  16  24  32  40  48  56  64  72  80  
				09  18  27  36  45  54  63  72  81  90  
				10  20  30  40  50  60  70  80  90  100  
 




*/