
#include <iomanip>
#include <iostream>
#include <string>

using namespace std; 
struct Person {

	short int age{};
	int numberPerson{}; 

	unsigned short int code; 

	string name{};
	string collage{};
};

int readPositiveNumber(const string message) {

	int number{};
	do {
		cout << message;
		cin >> number; 

		while (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
			cout << "Please Sir , Try enterd agian ): : ";
			cin >> number; 
		}
	} while (number < 0); 

	return number; 
}

string readStringWord(string const message) {

	string name{}; 
	cout << message; 
	getline(cin, name); 

	return name; 
}

void storeInformationEveryPerson(Person per[100] , int numberPerson) {

	for (int counter{ 0 }; counter < numberPerson; counter++) {

		system("cls");
		printf("\n%s %d %s\n", "-----------------------[ Person number " , counter + 1 , " ] ------------------------");
		per[counter].code = readPositiveNumber("\nEnter the Code Person : "); 
		cin.ignore(1, '\n');
		per[counter].name = readStringWord("\nEnter the Name Person : ");
		per[counter].age = readPositiveNumber("\nEnter the Age Person : ");
		cin.ignore(1, '\n');
		per[counter].collage = readStringWord("\nEnter the Collage Person : "); 
	}
}


void printInformation(Person per[100], int numberPerson) {

	system("cls"); 


	printf("\n\n\n");
	cout << "|--------------------------------------------------------------------|\n";
	cout << "|  Code   |        Name          |    Age    |        Collage        |\n";
	cout << "|--------------------------------------------------------------------|\n";

	for (int i{ 0 }; i < numberPerson; i++) {
		cout << "|" << left << setw(9) << per[i].code << "|" << setw(22) << per[i].name << "|",
		cout << setw(11) << per[i].age << "|" << setw(23) << per[i].collage << "|\n";
						}

	cout << "|--------------------------------------------------------------------|\n";

}
int main()
{
	struct Person p [100]; 
	int number = readPositiveNumber("Enter thte number of person "); 
	storeInformationEveryPerson(p, number);
	printInformation(p, number);
}

