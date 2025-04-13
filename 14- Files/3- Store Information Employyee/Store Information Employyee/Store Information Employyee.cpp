#include <iostream>
#include <vector>
#include <string> 
#include <iomanip> 
#include <fstream> 
#include <sstream>  // نضيف مكتبة sstream لاستخدام stringstream
#include <limits>   // للمراجعة عند المدخلات
using namespace std;

struct stEmployee {
    string nameFirstEmployee{};
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please Sir , Try enter the number correctly? ";
            cin >> number;
        }
    } while (number < 0);
    return number;
}

string readWord(const string message) {
    string word{};
    cout << message;
    cin >> word;
    return word;
}

float readNumberPositiveFloatingPoint(const string message) {
    float numberFloating{};
    do {
        cout << message;
        cin >> numberFloating;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please Sir , Try enter the number correctly? ";
            cin >> numberFloating;
        }
    } while (numberFloating < 0.0f);
    return static_cast<float>(numberFloating);
}

void ClearScreen(void) {
    system("cls");
}

void addingEmployee(vector<stEmployee>& vecStruct) {
    stEmployee employee;
    char Choise{ 'Y' };
    int counterDynamicAdding{ 1 };

    while (Choise == 'Y' || Choise == 'y') {
        ClearScreen();
        printf("\n\n%s [ Employee %d ]%s\n", "------------------- ++ ", counterDynamicAdding++, " ++ -------------------");

        employee.nameFirstEmployee = readWord("\n\nEnter the First name Of Employee to Adding to store Data? ");
        employee.nameSecoundEmployee = readWord("\n\nEnter the Second name Of Employee to Adding to store Data? ");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        employee.idEmployee = readNumberPositive("\nPlease Sir, Enter the ID of Employee? ");
        employee.ageEmployee = readNumberPositive("\nPlease Sir, Enter the Age of Employee? ");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        employee.sectionEmployee = readWord("\nEnter the Section into the Company Of Employee to Adding to store Data? ");
        employee.salaryEmployee = readNumberPositiveFloatingPoint("\nPlease Sir, Enter the Salary? ");

        vecStruct.push_back(employee);

        printf("\n\n%s\n\n", "--------------------------------------------------------------");
        printf("%s", "Do you Add Employee Again Sir ?? [ Y / y ]? ");
        cin >> Choise;
    }
}

string printTableOfEmployee_Header(void) {
    stringstream ss;
    ss << "|-----------------------------------------------------------------------------------------------|\n";
    ss << "|  ID  |            Name                   | Age |         Section           |    Salary    |\n";
    ss << "|-----------------------------------------------------------------------------------------------|\n";
   
    return ss.str();
}

string printTableOfEmployee_Footer(void) {
    stringstream ss;
    ss << "|-----------------------------------------------------------------------------------------------|\n";
    return ss.str();
}

string printTableOfEmployee(vector<stEmployee> VectorEmployee) {
    stringstream ss; // لاستخدام stringstream لجمع البيانات
    ClearScreen();


    for (stEmployee& MemberStr : VectorEmployee) {
        ss << '|' << left << setw(6) << MemberStr.idEmployee
            << '|' << left << setw(35) << MemberStr.nameFirstEmployee + ' ' + MemberStr.nameSecoundEmployee
            << '|' << left << setw(5) << MemberStr.ageEmployee
            << '|' << left << setw(26) << MemberStr.sectionEmployee
            << '|' << left << setw(14) << MemberStr.salaryEmployee << "|\n";
    }

   
    return ss.str(); // نرجع السلسلة النصية هنا
}

string tabs(int number) {
    string t{ "" };
    for (int i{ 1 }; i <= number; i++) t += '\t';
    return t;
}

void HeaderProgramEmployee(void) {
    cout << "\n\n";
    cout << tabs(3) << "--------------------------------------------------------------------------------\n\n";
    cout << tabs(3) << "                              +[ Employee Management ]+                        \n\n";
    cout << tabs(3) << "--------------------------------------------------------------------------------";
    cout << '\n';
}

void MenuProgramEmployee(void) {
    HeaderProgramEmployee();
    cout << tabs(3) << "--------------------------------------------------------------------------------\n\n";
    cout << tabs(3) << "[1]- Add Employee \n";
   // cout << tabs(3) << "[2]- View List Employee \n"; 
    cout << tabs(3) << "[2]- [Coming Soon] View List Employee \n";
    cout << tabs(3) << "[3]- Exit Program  \n\n";
    cout << tabs(3) << "-------------------------------------------------------------------------------\n";
}

void StartProgram(vector<stEmployee>& vec) {
    int numberChoice{};
    while (true) {
        ClearScreen();
        MenuProgramEmployee();
        cout << tabs(3);
        numberChoice = readNumberPositive("Please Sir, Enter the Number of Choice between [ Adding / View List / Exit ]? ");

        switch (numberChoice) {
        case 1: addingEmployee(vec); break;
      //  case 2: cout<< "\n\nComing Soon "; break;
        case 3: return;
        }
    }
}

int main() {
    vector<stEmployee> v;
    StartProgram(v);

    // إنشاء ملف للكتابة
    fstream file;
    file.open("Employee_Information.txt", ios::out);
    if (file.is_open()) {
        // كتابة البيانات في الملف باستخدام الدالة المعدلة
        
        
        file << printTableOfEmployee_Header();
        file << printTableOfEmployee(v);
        file << printTableOfEmployee_Footer();
        file.close();
    }
    else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
