
#include <iostream>
using namespace std;  


// Local variable 
void printNUmber_Using_Regular_Variable() {

	int numberRegualr{ 1 }; 
	cout << "The Number Regular value is : " << numberRegualr << endl;
	numberRegualr++;
}


//Static variable 
void printNUmber_Using_Static_Variable() {

	static int numberStatic{ 1 };
	cout << "The Number Static value is : " << numberStatic << endl;
	numberStatic++;
}
int main()
{
	printNUmber_Using_Regular_Variable();
	printNUmber_Using_Regular_Variable();
	printNUmber_Using_Regular_Variable();

	cout << "\n\n Static variable  : \n";
	printNUmber_Using_Static_Variable();
	printNUmber_Using_Static_Variable();
	printNUmber_Using_Static_Variable();
	
}

