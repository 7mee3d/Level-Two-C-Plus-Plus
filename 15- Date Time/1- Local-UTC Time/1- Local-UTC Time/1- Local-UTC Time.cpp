#pragma warning (disable : 4996 ) 
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	time_t time_Local = time(NULL);
	string Time_Local_One = ctime(&time_Local);
	char *  Time_Local_Two = ctime(&time_Local);

	cout << "\Local Time\n\n";
	cout << Time_Local_One << endl;
	cout << Time_Local_Two << endl;

	tm* UTC = gmtime(&time_Local);
	string UTC_Time = asctime(UTC);
	char * UTC_Time_Two = asctime(UTC);


	cout << "\nUTC Time\n\n";
	cout << endl << UTC_Time << endl;
	cout << UTC_Time_Two << endl;
}