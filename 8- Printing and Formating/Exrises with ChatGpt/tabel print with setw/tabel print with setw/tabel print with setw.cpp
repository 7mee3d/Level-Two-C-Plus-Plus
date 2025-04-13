#include <iostream>
#include <iomanip> // this library stored the std::setw
using namespace std;
int main()
{

	cout << "----------------------------------------------------------------------|\n";
	cout << "|   Code     |         Name         |          email                  |\n";
	cout << "----------------------------------------------------------------------|\n";
	cout << "|" <<left<< setw(12) << "1234" << "|" << left << setw(22)<< "Ahmed Jehad " << "|" << setw(33) << "Ahmed Jehad Ahmed" << "| \n"; 
	cout << "|" <<left<< setw(12) << "14" << "|" << left << setw(22)<< "Ahmed  " << "|" << setw(33) << "Ahmed Jehad Ahmed" << "| \n"; 
	cout << "|" <<left<< setw(12) << "1" << "|" << left << setw(22)<< "Jehad " << "|" << setw(33) << "Ahmed  Ahmed" << "| \n"; 
	cout << "|" <<left<< setw(12) << "124" << "|" << left << setw(22)<< "Jehad " << "|" << setw(33) << "Ahmed  Ahmed" << "| "; 
	cout << "\n|---------------------------------------------------------------------|\n";



		return 0;
}