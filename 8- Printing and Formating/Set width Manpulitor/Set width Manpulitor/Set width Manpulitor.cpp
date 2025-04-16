// Set width Manpulitor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> // Include import ( setw ) 

using namespace std; 

struct person {
    int ID; 
    string Name; 
    string section;

};
int main()
{
    struct person p[3]; 

    int counter = 0; 

    for (person& per : p) {
        cout << "Enter the Name : ";
        cin >> p[counter].Name;
        cout << "Enter the Section : ";
        cin >> p[counter].section;
        cout << "Enter the ID : ";
        cin >> p[counter].ID;
        counter++;
        cin.ignore();
    }

    cout << "|-------------------------------------------------------|\n";
    cout << "|   ID   |     Name              |     Section          |\n";
    cout << "|-------------------------------------------------------|\n";

    for(int i = 0 ; i< counter ;i++ ){
        cout<<"|" <<left<< setw(9) << p[i].ID <<"";
       cout << "|" << left << setw(24) <<  p[i].Name << "";
       cout << "|" << left << setw(20) <<  p[i].section <<"|\n";
    }
    return 0;

}

