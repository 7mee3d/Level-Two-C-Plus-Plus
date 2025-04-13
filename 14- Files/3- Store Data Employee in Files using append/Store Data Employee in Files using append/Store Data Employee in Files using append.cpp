// Store Data Employee in Files using append.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream> 
#include <iomanip> 
using namespace std; 

struct Employee {

    string firstName{};
    string LastName{};
    int ID{};
    string collage{};
    string section{};
};

int readNumberPositive(string const message) {

    int number{};
    do {

        cout << message; 
        cin >> number; 

        while (cin.fail()) {

            cin.clear();
            cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

            cout << message; 
            cin >> number; 
        }

    } while (number < 0); 

    return number; 
}

string readWordString(const string message) {

    string word{ } ;
    cout << message; 
    cin >> word; 

    return word; 

}
 
void fillVectorEmployee(vector < Employee>& emp) {

    Employee e{};
    char Choise{}; 
    do {
      
        e.firstName = readWordString("Enter the First Name , Please sir : \n"); 
        e.LastName = readWordString("Enter the Last Name , Please sir : \n");
        e.ID = readNumberPositive("Enter the your ID , Please sir : \n");
        e.collage = readWordString("Enter your collage , Please sir : \n");
        e.section = readWordString("Enter your section , Please sir : \n");
   
        emp.push_back(e);

        cout << "\n\nDo you add again employee [Y / y ] ?? ";
        cin >> Choise; 

    } while (Choise == 'Y' || Choise == 'y');

}
int main()
{
    vector < Employee> emp; 

    fillVectorEmployee(emp);

    fstream file; 
    file.open("Employee_Information.txt", ios::out | ios::app);
  static  int counter = 1 + 0; 
    if (file.is_open()) {

        for (Employee& e : emp) {
            
            file << "\n\n----------------------- ++ Emplyee [ " << counter << " ]++ ---------------------\n\n";
            file <<  "The Fill Name : " << e.firstName + " " + e.LastName << "\n";
            file <<  "The ID  Emplyee " << e.ID << "\n";
            file <<  "The Collage  Emplyee : "<<  e.collage << "\n";
            file <<  "The Section Name Emplyee : "  << e.section << "\n";
            counter++; 
            file << "\n\n----------------------------------------------------------------------------------\n\n"; 
  
        
        }
        file.close();
    }

    
}

