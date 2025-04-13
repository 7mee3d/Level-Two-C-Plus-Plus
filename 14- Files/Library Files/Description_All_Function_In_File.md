# Function Descriptions in the Code

This file contains a collection of functions that interact with text files using C++. These functions perform operations like reading data from files, writing to files, and deleting or updating data within them. All operations are performed using `fstream`, which provides a general way to work with files.

---

## 1. `getLineInFile(fstream& file, string &line)`
- **Description:** This function reads one line from the file and stores it in the `line` variable.
- **Return Value:** It returns `true` if the line was successfully read, and `false` if no line was read.

---

## 2. `printFileLineConsol_Output(string pathFile)`
- **Description:** This function opens the file located at `pathFile`, reads each line, and prints it to the console.
- **Operation:** It uses `getLineInFile` to read the lines.

---

## 3. `printFileLineStoringInFile(string pathFile)`
- **Description:** This function opens the file, reads each line, and writes each line back to the file itself.
- **Issue:** The logic for writing back to the file while reading has a problem.

---

## 4. `moveFileToFile(string pathSoruseFile, string pathDestnationFile, const bool AreAppendOrNot)`
- **Description:** This function moves the contents from the source file (`pathSoruseFile`) to the destination file (`pathDestnationFile`).
- **Operation:** If `AreAppendOrNot` is `true`, it overwrites the destination file; otherwise, it appends to the destination file.

---

## 5. `clearFile(string pathFile)`
- **Description:** This function clears the contents of the file (deletes all the data inside it).
- **Operation:** It opens the file in write mode, which clears its contents.

---

## 6. `moveContantFileInVector(string pathFile, vector<string>& vectorTest)`
- **Description:** This function reads all the lines from the file and stores them in a `vector<string>`.
- **Operation:** It uses `getLineInFile` to read each line and adds it to the vector.

---

## 7. `moveContantVectorInFile(string pathFile, vector<string>& vectorTest)`
- **Description:** This function writes all the lines from the vector back into the file.
- **Operation:** It opens the file in write mode, and writes each line into it.

---

## 8. `deleteLineInFile_Record(string pathFile, string Record)`
- **Description:** This function deletes the line that exactly matches the given `Record` from the file.
- **Operation:** It stores the file contents in a `vector<string>`. Then, it searches for the line that matches the `Record` and replaces it with an empty string.

---

## 9. `deleteWordInFileEveryLine(string pathFile, string word)`
- **Description:** This function removes the specified word `word` from every line in the file.
- **Operation:** It uses `find` to search for the word in each line and erases it using `erase`.

---

## 10. `updateLineInFile_Record(string pathFile, string Record, string recordUpdate)`
- **Description:** This function updates the line that exactly matches the given `Record` with the new `recordUpdate`.
- **Operation:** It replaces the matching line in the vector and writes it back to the file.

---

## 11. `updateWordInFileEveryLine(string pathFile, string word, string recordUpdate)`
- **Description:** This function replaces the word `word` with `recordUpdate` in every line of the file.
- **Operation:** It searches for the word and replaces it in each line using `replace`.

---

## 12. `cutFileToFile(string pathFileSorc, string pathDestnation)`
- **Description:** This function copies all content from the source file (`pathFileSorc`) to the destination file (`pathDestnation`) and then clears the source file.
- **Operation:** It moves the content using `moveFileToFile`, then clears the source file using `clearFile`.

---

### Notes:

- All functions interact with files using `fstream`, and they open the files in different modes like reading (`ios::in`), writing (`ios::out`), or appending (`ios::app`).
- The code includes operations for reading, writing, deleting, replacing, and updating data in text files.
- Operations are done by storing the contents in a `vector<string>` and then writing them back to the file after the required changes.

---
