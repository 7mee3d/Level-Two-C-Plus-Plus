// Simple Project ( Vector and Structure ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string> 
#include <iomanip> 

using namespace std; 

struct stEmployee {

    string nameFirstEmployee {}; 
    string nameSecoundEmployee{};
    int idEmployee{}; 
    float salaryEmployee{};
    string sectionEmployee{}; 
    int ageEmployee{};
};


int readNumberPositive(string const message) {

    int number{}; 

    do {

        cout << message; 
        cin >> number; 

        while (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

            cout << "Please Sir , Try enterd the number correct ? "; 
            cin >> number; 

        }
    } while (number < 0); 

    return number; 

}


string readWord(const string message) {

    string word{}; 

    cout << message; 

  cin >> word ; 

    return word; 
}

float readNumberPositiveFloatingPoint(const string message) {

    float numberFloating{};

    do {

        cout << message; 
        cin >> numberFloating; 

        while (cin.fail()) {

            cin.clear();
            cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

            cout << "Please Sir , Try enterd the number correct ? "; 
            cin >> numberFloating; 
        }
    } while (numberFloating < 0.0f); 

    return static_cast <float>(numberFloating); 

}

void ClearSecreen(void) {
    system("cls"); 
}

void addingEmployee(vector<stEmployee>& vecStruct) {

    stEmployee employee;
    char Choise{ 'Y' };
    int counterDynamicAdding{ 1 };

    while (Choise == 'Y' || Choise == 'y') {

        ClearSecreen();
        printf("\n\n%s [ Employee %d ]%s\n", "------------------- ++ ", counterDynamicAdding++, " ++ -------------------");


        employee.nameFirstEmployee = readWord("\n\nEnter the First name Of Employee to Adding to store Data ? ");
        employee.nameSecoundEmployee = readWord("\n\nEnter the Secound name Of Employee to Adding to store Data ? ");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        employee.idEmployee = readNumberPositive("\nPlease Sir , Enter the ID of Employee ? ");
        employee.ageEmployee = readNumberPositive("\nPlease Sir , Enter the Age of Employee ? ");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        employee.sectionEmployee = readWord("\nEnter the Section into the Company Of Employee to Adding to store Data ? ");
        employee.salaryEmployee = readNumberPositiveFloatingPoint("\nPlease Sir , Enter the Salary ? ");

        vecStruct.push_back(employee);

        printf("\n\n%s\n\n", "--------------------------------------------------------------");
        printf("%s", "Do you Add Employee Again Sir ?? [ Y / y ] ? ");

        cin >> Choise;
    }
}


void printTabelOfEmployee_Header(void) {

    cout << "|-------------------------------------------------------------------------------------|\n";
    cout << "|  ID  |            Name              | Age |         Section          |    Salary    |\n";
    cout << "|-------------------------------------------------------------------------------------|\n";

}

void printTabelOfEmployee_Footer(void) {

    cout << "|-------------------------------------------------------------------------------------|\n";
  
}
void printTabelOfEmployee(vector <stEmployee> VectorEmployee) {

    ClearSecreen();
    
    cout << "\n\n\n";

    printTabelOfEmployee_Header();

    for (stEmployee& MemberStr : VectorEmployee) {

        cout << '|' << left << setw(6) << MemberStr.idEmployee << '|' << left << setw(30) << MemberStr.nameFirstEmployee + ' ' + MemberStr.nameSecoundEmployee,
            cout << '|' << left << setw(5) << MemberStr.ageEmployee << '|' << left << setw(26) << MemberStr.sectionEmployee << '|',
            cout << left << setw(14) << MemberStr.salaryEmployee << "|\n";

    }

    printTabelOfEmployee_Footer(); 


    // Dealy loops ( stop ) ( enter enter to return menu 

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

}



string tabs(int number) {

    string t{ "" }; 
    for (int i{ 1 }; i <= number; i++)
        t += '\t'; 

    return t; 


}

void HeaderProgramEmployee(void) {

    cout << "\n\n"; 
    cout << tabs(3)<< "--------------------------------------------------------------------------------\n\n";
    cout << tabs(3)<< "                              +[ Employee Mangements ]+                        \n\n";
    cout << tabs(3)<< "--------------------------------------------------------------------------------";
    cout << '\n';



}
void MenuProgrammEmployee(void) {

    HeaderProgramEmployee();

    cout << tabs(3) << "--------------------------------------------------------------------------------\n\n";
    cout << tabs(3) << "[1]- Add Employee \n";
    cout << tabs(3) << "[2]- View List Employee \n";
    cout << tabs(3) << "[3]- Exit Program  \n\n";
    cout << tabs(3) << "-------------------------------------------------------------------------------\n";



}
void Startrogramm(vector <stEmployee> &vec) {


    int numberChoise{}; 

    while (true) {
        ClearSecreen();

        MenuProgrammEmployee();
        cout << tabs(3); 
        numberChoise = readNumberPositive("Please Sir , Enter the Number of Choise between [ Adding / View List / Exit ] ? ");

        switch (numberChoise) {

        case 1: addingEmployee(vec); break; 
        case 2: printTabelOfEmployee(vec); break; 
        case 3: return; 

        }
    }
}

int main()
{
    vector <stEmployee> v; 
    Startrogramm(v);
}
