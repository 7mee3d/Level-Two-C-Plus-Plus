
#include <iostream>
using namespace std; 

// print using Recursion 

void printNumberFramOfTo(int fram, int to) {

    if (fram <= to) {
        cout << fram << endl;
        printNumberFramOfTo(fram + 1, to);
    }
}

int main()
{
    printNumberFramOfTo(1, 10);
}

