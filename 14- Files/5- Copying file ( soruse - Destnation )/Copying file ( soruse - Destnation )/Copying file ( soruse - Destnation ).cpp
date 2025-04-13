// Copying file ( soruse - Destnation ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std; 


void copyingFile(string pathFileSorcuse, string pathDestnationFile, bool override) {

    fstream sec, desFile;
    sec.open(pathFileSorcuse, ios::in);
    desFile.open(pathDestnationFile, override ? ios::out : ios::app);

    if (sec.is_open() && desFile.is_open()) {

        string line{ "" }; 

        while (getline(sec, line))
            desFile << line << endl; 
    }
    sec.close();
    desFile.close(); 



}


int main()
{
    copyingFile("File1.txt", "File2.txt", false);


}

