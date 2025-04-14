
#include <iostream>

// Include out fie in derectory file ( project ) using " NameFile .h " 
#include "ReadNumber.h"

using namespace std; 

//Using namespace element one in header file 
using ReadNum::readNumberPositive;


// using all function in namespace (Header file) 
using namespace ReadNum; 



int main()
{

	// using function in header file 
	readNumberPositive("Enter the Number");
}
