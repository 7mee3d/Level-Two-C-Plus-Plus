#ifndef MyHeaderFiles
#define MyHeaderFiles

#include <iostream>
#include <fstream>
#include <vector>
#include<string> 
using namespace std; 

namespace files {


	// This function reads one line from the file and stores it in 'line' variable.
	// It returns true if a line was read, false otherwise.

	bool getLineInFile(fstream& file , string &line) {
		

		if (getline(file, line)) {
			return 1;
		}
		else {
			return 0; 
		}
	}

	// This function opens a file, reads every line, and prints it to the console.

	void printFileLineConsol_Output(string pathFile) {

		fstream file; 
		file.open(pathFile, ios::in); 
		string line{ "" };

		if (file.is_open()) {

			while (getLineInFile(file , line))
				cout << line << endl; 

		}
		file.close();
	}

	// This function opens a file, and tries to write each line back to the file itself (but this logic has a problem).

	void printFileLineStoringInFile(string pathFile) {

		fstream file;
		file.open(pathFile, ios::in);
		string line{ "" };

		if (file.is_open()) {

			while (getLineInFile(file, line))
				if(line != "")
					file << line << endl;

		}
		file.close();
	}

	// This function copies all lines from source file to destination file.
	// If AreAppendOrNot is true, it overwrites the destination file.
	// If false, it appends to the destination file.

	void moveFileToFile(string pathSoruseFile, string pathDestnationFile, const bool AreAppendOrNot) {

		fstream fileS , fileD ; 

		fileS.open(pathSoruseFile , ios::in);

		fileD.open(pathDestnationFile, AreAppendOrNot ? ios::out : ios::app);

		if (fileS.is_open() && fileD.is_open())
		{
			string line{ "" }; 

			while (getLineInFile(fileS, line)) {

				fileD << line << endl; 

			}
		}
		fileS.close();
		fileD.close(); 

	}
	
	// This function clears the file (deletes all its content).

	void clearFile(string pathFile){

		fstream file;
		file.open(pathFile, ios::out); 
		if (file.is_open()) {
		
			file.close();
		}
	}

	// This function reads all lines from a file and saves them in a vector.

	void moveContantFileInVector(string pathFile, vector<string>& vectorTest) {
		fstream file; 
		file.open(pathFile, ios::in);

		if (file.is_open()) {

			string line{ "" } ;

			while (getLineInFile(file, line)) {

				vectorTest.push_back(line); 

			}
		}
		file.close();
	}

	// This function writes all lines from a vector into a file.

	void moveContantVectorInFile(string pathFile, vector<string>& vectorTest) {

		fstream file;
		file.open(pathFile, ios::out);

		if (file.is_open()) {

			for (string& line : vectorTest) {
				file << line << endl;

			}
		}
		file.close();
	}

	// This function deletes a specific line (Record) from the file.

	void deleteLineInFile_Record(string pathFile , string Record) {
		vector <string> vectorTest; 
		moveContantFileInVector(pathFile, vectorTest); 

		for (string& line : vectorTest) {
			if (line == Record)
				line = "";
		}
		moveContantVectorInFile(pathFile, vectorTest);

	}

	// This function removes a specific word from every line in the file.

	void deleteWordInFileEveryLine(string pathFile, string word) {
		vector <string> vectorTest;

		moveContantFileInVector(pathFile, vectorTest);

		for (string& line : vectorTest) {

			size_t index = line.find(word);
			size_t length = word.length();
			while (index != string::npos) {
				line.erase(index, length);
				index = line.find(word);
			}
		}
		moveContantVectorInFile(pathFile, vectorTest);
	}

	// This function updates a line in the file if it exactly matches a specific Record.

	void updateLineInFile_Record(string pathFile, string Record , string recordUpdate) {

		vector <string> vectorTest;
		moveContantFileInVector(pathFile, vectorTest);

		for (string& line : vectorTest) {
			if (line == Record)
				line = recordUpdate;
		}

		moveContantVectorInFile(pathFile, vectorTest);

	}

	// This function replaces a specific word with another word in every line of the file.

	void updateWordInFileEveryLine(string pathFile, string word, string recordUpdate ) {

		vector <string> vectorTest;

		moveContantFileInVector(pathFile, vectorTest);

		for (string& line : vectorTest) {

			unsigned short int index = line.find(word);
			unsigned short int length = word.length();
			while (index != string::npos) {
				line.replace(index, length , recordUpdate);
				index = line.find(word);
			}
		}
		moveContantVectorInFile(pathFile, vectorTest);
	}


	// This function copies all content from source file to destination file, then clears the source file.

	void cutFileToFile(string pathFileSorc , string pathDestnation ) {

		moveFileToFile(pathFileSorc, pathDestnation, true); 
		clearFile(pathFileSorc);
	}


};

#endif
 