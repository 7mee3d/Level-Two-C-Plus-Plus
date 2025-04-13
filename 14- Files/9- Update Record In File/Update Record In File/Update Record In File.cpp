// Save Vector to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
#include <vector> 


void loadDataInVector(string pathFile, vector <string>& vec) {
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

void updateElementInFile(string pathFile, string word , string newWord ) {

	vector <string> vec;

	loadDataInVector(pathFile, vec);

	for (string& line : vec) {
		if (line == word) {
			line = newWord;
		}
	}
	saveVectorInFile(pathFile, vec);

}



void printFile(string pathFile) {

	fstream file;
	file.open(pathFile, ios::in);

	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			if (line != "")
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
	
	updateElementInFile("File.txt", "Ahmed" , "ii");
	printFile("File.txt");
}
