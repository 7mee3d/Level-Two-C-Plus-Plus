#include <iostream>
#include <vector> 

using namespace std;

void readNUmbers(vector<int>& vec) {
    int number{};
    char Choise{};

    do {
        number = { 0 };
        cout << "Enter the number to store in the vector: ";
        cin >> number;

        vec.push_back(number);

        cout << "Are you adding another number? [Y/y]: ";
        cin >> Choise;

    } while (Choise == 'Y' || Choise == 'y');
}

void CopyVector(vector<int>& Vec1, vector<int>& Vec2) {
    // تخصيص مساحة للمتجه الثاني بنفس حجم المتجه الأول
    Vec2.resize(Vec1.size());

    // نسخ العناصر من المتجه الأول إلى المتجه الثاني بالعكس
    for (int i = 0; i < Vec1.size(); i++) {
        Vec2[i] = Vec1[Vec1.size() - i - 1];
    }
}

void printVector(vector<int>& Vec) {
    cout << "\n\n";
    for (int i{ 0 }; i < Vec.size();i++) {
        cout << Vec[Vec.size() - i - 1] << "\n"; 
    }
}

int main() {
    vector<int> v1, v2;

    readNUmbers(v1);
   // CopyVector(v1, v2);
    printVector(v1);

    system("pause>0");
}