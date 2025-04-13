// CCTYPE Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std; 


int main()
{
  // Cheak Character or Digit 

	cout << "\nFunction Cheak Digit or Character \n";

	cout << isalnum('A') << endl; 
	cout << isalnum('5') << endl; 
	cout << endl;

	cout << isdigit('a') << endl;
	cout << isdigit('6') << endl; 
	cout << endl;

	cout << isalpha('A') << endl;
	cout << isalpha(8) << endl;
	cout << endl; 



	cout << "---------------------------------------\n";

	cout << "\nFunction Cheak Character Lowercase or Uppercase \n";

	char c{}; 
	cout << "Enter the Character to Cheak "; 
	cin >> c; 

	if (isupper(c))
		cout << "Upper haracter";
	else
		cout << "Lower Character";

	cout << endl; 

	cout << endl << endl; 
	cout << "---------------------------------------\n";

	cout << "\nFunction Cheak scape Sequations  \n";

	cout << iscntrl('\n') << endl; 
	cout << iscntrl('1') << endl; 
	cout << "---------------------------------------\n";
	cout << endl << endl;

	cout << "\nFunction Punationation Mark  \n";

	cout << ispunct('!') << endl; 
	cout << ispunct('$') << endl; 
	cout << ispunct('6') << endl; 
	cout << ispunct('A') << endl; 
	
	cout << "---------------------------------------\n";


}

