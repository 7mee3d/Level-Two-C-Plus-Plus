#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* Next;
};

class LinkedList {
public:
    Node* Head;

    LinkedList() {
        Head = nullptr;
    }

    void inseart(int number) {
        Node* newNode = new Node();
        newNode->data = number;
        newNode->Next = nullptr;

        // إذا كانت القائمة فارغة، يصبح العنصر الجديد هو الرأس
        if (Head == nullptr) {
            Head = newNode;
        }
        else {
            // إذا كانت القائمة غير فارغة، نضيف العنصر في النهاية
            Node* temp = Head;
            while (temp->Next != nullptr) {
                temp = temp->Next;
            }
            temp->Next = newNode;
        }
    }

    string DisplayStore() {
        Node* temp = Head;
        string s = "";

        while (temp != nullptr) {
            s += to_string(temp->data) + " ";
            temp = temp->Next;
        }

        return s;  // يجب إرجاع السلسلة النصية هنا
    }
};

int main() {
    LinkedList l;
    l.inseart(10);
    l.inseart(20);
    l.inseart(30);

    fstream myFile;
    string s = l.DisplayStore(); // الحصول على السلسلة النصية من DisplayStore()

    myFile.open("C:\\MyFil.txt", ios::out); // فتح الملف للكتابة
    if (myFile.is_open()) {
        myFile << s; // كتابة السلسلة النصية في الملف
        myFile.close(); // إغلاق الملف
    }
    else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
