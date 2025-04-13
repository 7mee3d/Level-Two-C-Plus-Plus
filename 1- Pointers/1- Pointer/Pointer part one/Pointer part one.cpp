
#include <iostream>

using namespace std; 


int main()
{

	// inilization vairable uaing store value insided 

	int variable_one = 10; 


	// print value variable 

	cout << "\nThe Value of variable one : " << variable_one << endl; 


	// print meomery address variable without storing variable 
	
	cout << "\nThe memory address of variable one without store address in the variable ( pointer ) : " <<  & variable_one << endl;
	

	// Inilization pinter to store memory address this variable one 

	int * pointer = & variable_one;

	// print of the momery address of variable 

	cout <<"\nThe Value of pointer after stoing in the pointer ( store address variable one ) : " <<  pointer << endl;

	return 0; 

}

