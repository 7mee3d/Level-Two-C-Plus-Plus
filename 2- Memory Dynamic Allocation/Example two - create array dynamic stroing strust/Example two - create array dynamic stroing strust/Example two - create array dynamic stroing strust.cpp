#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::left;

struct Employee {
    string name{};
    int ID{};
    unsigned short int age{};
};


void fillInformationEmployee(Employee* infoEmp, int* size) {
    cin.ignore(); 

    for (int i = 0; i < *size; i++) {
        cout << "\n\nEmployee Number [ " << i + 1 << " ]\n\n";
        cout << "Enter the Name of Employee: ";
        std::getline(cin, (infoEmp + i)->name);
        cout << "Enter the ID of Employee: ";
        cin >> (infoEmp + i)->ID;
        cout << "Enter the Age of Employee: ";
        cin >> (infoEmp + i)->age;
        cin.ignore(); 
    }
}


void header() {
    cout << endl << endl ; 

    cout << "+--------+-----------------------+--------+\n";
    cout << "|  ID    |         Name         |  Age   |\n";
    cout << "+--------+-----------------------+--------+\n";
}

void footer() {
    cout << "+--------+-----------------------+--------+\n";
}

void printInfoEmployee(Employee* infoEmp, int* size) {
    header();

    for (int i = 0; i < *size; i++) {
        cout << "| " << left << setw(7) << (infoEmp + i)->ID
            << "| " << left << setw(22) << (infoEmp + i)->name
            << "| " << left << setw(6) << (infoEmp + i)->age << "|\n";
    }

    footer();
}

int main() {
    int* size = new int;

    cout << "Enter the number of employees: ";
    cin >> *size;

    Employee* array = new Employee[*size];

    fillInformationEmployee(array, size);
    printInfoEmployee(array, size);

    delete[] array;
    delete size;
}
