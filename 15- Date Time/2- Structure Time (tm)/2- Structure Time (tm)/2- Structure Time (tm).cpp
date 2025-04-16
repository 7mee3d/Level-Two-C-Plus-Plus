
#pragma warning (disable : 4996 )
#include <iostream>
#include <ctime>
using namespace std; 

/* 

                    / time structure /


    + tm_year --> return the number year to pass since of 1900Year 
    + tm_mday --> return the day of mounth 
    + tm_mon --> return the mounth 0 - 12 --> incremnt by one of the mounth to print reult coreect 
    + tm_min --> return the min of time currently 
    + tm_sec --> return the secound of time currently 
    + tm_wday --> return the day of weekly --> ( string ) ( word )
    + tm_hour --> return the hour of day 
    + tm_yday --> return the day of year counting since of 1/1 
    + tm_isdst --> return true or false is daylight saving time or Not 


*/


int main()
{

    time_t timee = time(0); // take of the time currently 
    tm* stTime = localtime (&timee) ; // store the time string using by local time 


    cout << "Year: " << stTime->tm_year + 1900 << endl;
    cout << "Month: " << stTime->tm_mon + 1 << endl;
    cout << "Day: " << stTime->tm_mday << endl;
    cout << "Hour: " << stTime->tm_hour << endl;
    cout << "Min: " << stTime->tm_min << endl;
    cout << "Second: " << stTime->tm_sec << endl;
    cout << "Week Day (Days since sunday): " << stTime->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << stTime->tm_yday << endl;
    cout << "hours of daylight savings:" << stTime-> tm_isdst<< endl;
}



