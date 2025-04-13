// Clear data in file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
#include <string>

#include <fstream>

void clearDataInFile(string pathFile) {
    fstream file;

    file.open(pathFile, ios::out);
    if (file.is_open())
        file.close();
    else
        cout << "File is already is Empty : "; 


}
void readFile(string pathFile) {
    fstream file;

    file.open(pathFile, ios::in);

    if (file.is_open())
    {
        string line; 
        getline(file, line); 

        while (!file.eof()) {
            cout << line << endl; 
            getline(file, line);
        }
    }


    file.close();
}

int main()
{
    readFile("File1.txt");
    clearDataInFile("File1.txt");
 
    

}

