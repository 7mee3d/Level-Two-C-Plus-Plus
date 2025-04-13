#include <iostream> 

#ifndef READNUMBERS 
#define READNUMBERS


using namespace std; 

unsigned short int kZERO{ 0 }; 




namespace myLibRead {
		
	/**
	
			 This is function read numbers positive is lnger zero 

			message This is parameter to the progrmmer using to enter the message manially 

			and this function return value is data type *integer* 

	*/

	int readNumberPositiveInteger(const string message) {

		int number{}; 

		do {

			cout << message;
			cin >> number;

			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}
		} while (number < ::kZERO);


		return number; 
	}

	/**

			 This is function read numbers positive is lnger zero

			message This is parameter to the progrmmer using to enter the message manially

			and this function return value is data type *Double*

	*/

	double readNumberPositiveDouble(const string message) {

		double number{};

		do {

			cout << message;
			cin >> number;

			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}
		} while (number < ::kZERO);

		

		return number;
	}


	float  readNumberFloatingPointPositive(const string message) {


		float number{};


		do {

			cout << message;
			cin >> number;


			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}

		} while (number < ::kZERO);

		return static_cast <float> (number);
	}


	
	/**

			 This is function read numbers positive is lnger zero

			message This is parameter to the progrmmer using to enter the message manially

			and this function return value is data type *Short int*

	*/


	short int readNumberPositiveShort(const string message) {

		
		short int number{};

		do {

			cout << message;
			cin >> number;

			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}
		} while (number < ::kZERO);

		return number;
	}


	char readCharacter (const string message) {


		char character{};
		cout << message; 
		cin >> character; 

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
			cout << "Enter the Character is coorect , Please : "; 
			cin >> character;
		}

		return character;
	}




	bool readBooleanValue(const string message) {

		bool flagBoolean{};
		string inputBoolean{};

		while (true) {

			cout << message;
			cin >> inputBoolean;

			// Check if the input is a valid boolean value
			if (inputBoolean == "true" || inputBoolean == "1") {
				flagBoolean = true;
				break;
			}
			else if (inputBoolean == "false" || inputBoolean == "0") {
				flagBoolean = false;
				break;
			}
			else {

				cout << "Invalid input. Please enter 'true', 'false', 0, or 1: ";
				cin.clear(); 
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		return flagBoolean; 
	}

	long long int  readNumberPositiveLongLongInteger(const string message) {


		long long int number{};

		do {

			cout << message;
			cin >> number;

			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}
		} while (number < ::kZERO );

		return number;
	}




	 long long int  readNumberLongLongIntegerSigned(const string message) {


		unsigned long long int number{};

			cout << message;
			cin >> number;

			while (cin.fail()) {

				cin.clear();
				cin.ignore(numeric_limits <streamsize>::max(), '\n');
				cout << "Enter the Number Validation , Please : ";
				cin >> number;

			}


		return number;
	}


	 signed int  readNumberIntegerSigned(const string message) {


		 signed  int number{};

		 cout << message;
		 cin >> number;

		 while (cin.fail()) {

			 cin.clear();
			 cin.ignore(numeric_limits <streamsize>::max(), '\n');
			 cout << "Enter the Number Validation , Please : ";
			 cin >> number;

		 }


		 return number;
	 }

	  double  readNumberDoubleSigned(const string message) {


		   double number{};

		 cout << message;
		 cin >> number;

		 while (cin.fail()) {

			 cin.clear();
			 cin.ignore(numeric_limits <streamsize>::max(), '\n');
			 cout << "Enter the Number Validation , Please : ";
			 cin >> number;

		 }


		 return number;
	 }


	  short int   readNumberShortIntegerSigned(const string message) {


		  short int  number{};

		  cout << message;
		  cin >> number;

		  while (cin.fail()) {

			  cin.clear();
			  cin.ignore(numeric_limits <streamsize>::max(), '\n');
			  cout << "Enter the Number Validation , Please : ";
			  cin >> number;

		  }


		  return number;
	  }


	   float  readNumberFloatingPointSigned(const string message) {


		  float number{};

		  cout << message;
		  cin >> number;

		  while (cin.fail()) {

			  cin.clear();
			  cin.ignore(numeric_limits <streamsize>::max(), '\n');
			  cout << "Enter the Number Validation , Please : ";
			  cin >> number;

		  }


		  return static_cast <float> (number) ;
	  }
};


#endif 