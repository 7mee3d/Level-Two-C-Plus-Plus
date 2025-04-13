// Read Mode- Print File Content.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string> 

using namespace std;


void printReadFiles(string pathFile) {

    fstream file; 

    file.open(pathFile, ios::in);

    string line; 
    while (getline(file, line)) {
        cout << line << endl; 

    }
    file.close(); 
}
int main()
{
    printReadFiles("testRead.txt");
}

