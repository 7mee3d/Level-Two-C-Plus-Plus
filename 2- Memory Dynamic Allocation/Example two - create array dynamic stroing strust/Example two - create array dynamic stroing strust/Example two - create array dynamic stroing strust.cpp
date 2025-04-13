#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Employee {
    string name{};
    int ID{};
    unsigned short int age{};
};

void fillInformationEmployee(Employee* infoEmp, int size) {
    for (int i = 0; i < size; i++) {
        cout << "\n\nEmployee Number [ " << i + 1 << " ]\n\n";
        cout << "Enter the Name of Employee: ";
        cin.ignore();
        std::getline(cin, (infoEmp + i)->name);
        cout << "Enter the ID of Employee: ";
        cin >> (infoEmp + i)->ID;
        cout << "Enter the Age of Employee: ";
        cin >> (infoEmp + i)->age;
    }
}

void print(Employee* infoEmp, int size) {

    for (int i = 0; i < size; i++) {
        cout << "\n\nEmployee Number [ " << i + 1 << " ]\n\n";
        cout << "Name of Employee: " << (infoEmp + i)->name << endl;
        cout << "ID of Employee: " << (infoEmp + i)->ID << endl;
        cout << "Age of Employee: " << (infoEmp + i)->age << endl;
    }
}

int main() {
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;

    Employee* array = new Employee[size];

    fillInformationEmployee(array, size);
    print(array, size);

    delete[] array;
}
