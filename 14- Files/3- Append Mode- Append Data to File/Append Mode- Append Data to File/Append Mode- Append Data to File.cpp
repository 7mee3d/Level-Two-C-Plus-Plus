// Append Mode- Append Data to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
using namespace std; 


int main()
{
    fstream file; 
    file.open("MyFile.txt", ios::app);
    // 
    if (file.is_open()) {
        file << "\n\nAhmed \n";
        file << "Jehad";

        file.close();
    }
}

