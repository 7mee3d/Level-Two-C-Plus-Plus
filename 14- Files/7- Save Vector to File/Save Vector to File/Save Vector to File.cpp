// Save Vector to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
using namespace std;
#include <vector> 

void saveVectoInFile(string pathFile, vector <string>& vec) {

    fstream file; 
    file.open(pathFile, ios::out);

    if (file.is_open()) {
        for (string& line : vec)
            if(line !="") 
            file << line << endl; 

    }

    file.close(); 

} 
int main()
{
    vector <string> vvectorr{ "Ahmed" , "Jehad" , "Moahmmed" , "Omar" };

    saveVectoInFile("File.txt", vvectorr); 
}

