// Write Mode- Write Data To File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 

using namespace std; 

int main()
{
    fstream myFile;

    myFile.open("MY_File.txt", ios::out); 

    if (myFile.is_open()) {

        myFile << "El-Motteer\n";
        myFile << "Ahmed\n";

        myFile.close();
    }

    cout << "\n\nFile is Writen ";
}

