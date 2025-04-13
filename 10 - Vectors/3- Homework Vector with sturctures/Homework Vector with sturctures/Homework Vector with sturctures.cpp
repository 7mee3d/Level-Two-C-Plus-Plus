

#include <iostream>
using namespace std;
#include <vector>
#include <string> 

#include <iomanip> 
struct stEmployee {

    int ageEmployee{};
    string nameEmployee{}; 
    float salaryEmployee{};
    unsigned short int codeEmployee{}; 

};

void readManyEmployee(vector <stEmployee> &vec) {

    stEmployee Emp; 

    char Choise{ 'Y' }; 

    while (Choise == 'Y' || Choise == 'y') {
        system("cls"); 

        printf("%s", "Enter the Name Employee , Please : ");
        cin.ignore(1, '\n');
        getline(cin, Emp.nameEmployee); 
        
        printf("%s", "Enter code Eemployee : ");
        cin >> Emp.codeEmployee; 
        printf("%s", "Enter age Eemployee : ");
        cin >> Emp.ageEmployee;
        printf("%s", "Enter salary Eemployee : ");
        cin >> Emp.salaryEmployee;

        vec.push_back(Emp);
       
        cout << "Do you Added again ? [ Y / y ] : "; 
        cin >> Choise; 

    }
}

void printEmployee(vector <stEmployee> &vec) {

    system("cls"); 
    cout << "|---------------------------------------------------------------|\n";
    cout << "|   Code   |           Name            |   Age   |     salary   |\n";
    cout << "|---------------------------------------------------------------|\n";
    for (stEmployee& emp : vec) {
      //  printf("|%-10i | %-25s | %-8d |%-14.4f |\n", emp.codeEmployee, emp.nameEmployee, emp.ageEmployee, emp.salaryEmployee);
        cout << '|' << left << setw(10) << emp.codeEmployee << '|' << left << setw(27) << emp.nameEmployee << '|' << left << setw(9),
            cout << emp.ageEmployee << '|' << left << setw(14) << emp.salaryEmployee << '|' << endl;
    }
    cout << "|---------------------------------------------------------------|\n";
}
int main()
{
    vector <stEmployee> vec; 
    readManyEmployee(vec);
    printEmployee(vec);

}

