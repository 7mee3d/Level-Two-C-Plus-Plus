
#include <iostream>
using namespace std;

// print using Recursion 

void printNumberFramOfTo(int fram, int to) {

    if (fram <= to) {

        cout << to << endl;
        
        printNumberFramOfTo(fram , to - 1 );
    }
}

int main()
{
    printNumberFramOfTo(1, 10);
}

