// Save Vector to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
#include <vector> 


void loadDataInVector(string pathFile , vector <string>& vec) {
	fstream file; 
	file.open(pathFile, ios::in); 

	if (file.is_open()) {
		string line; 
		while (getline(file, line)) {
			vec.push_back(line); 
		}
		file.close();
	}

}

void saveVectorInFile(string pathFile, vector <string>& vec) {
	fstream file;
	file.open(pathFile, ios::out);
	if (file.is_open()) {


		for (string& line : vec) {

			if (line != "")
				file << line << endl;

		}


		file.close();
	}
}

void deleteElementInFile(string pathFile, string word ) {

	vector <string> vec;

	loadDataInVector(pathFile, vec);
		string line; 
		for(string &line : vec )  {
			if (word == line) 
				line = "";
		}
		saveVectorInFile(pathFile, vec);

	}



void printFile(string pathFile) {

	fstream file;
	file.open(pathFile, ios::in);

	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			if(line != "")
			file << line << endl;
		}
		file.close();
	}
}


void printFile2(string pathFile) {

	fstream file;
	file.open(pathFile, ios::in);

	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			if (line != "")
				cout << line << endl;
		}
		file.close();
	}
}
int main()
{
	printFile2("File.txt");
	deleteElementInFile("File.txt", "Ahmed");
	cout << endl << endl << endl; 

	//printFile2("File.txt");
	printFile("File.txt");

}

