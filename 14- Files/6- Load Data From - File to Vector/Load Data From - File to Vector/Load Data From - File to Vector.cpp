#include <iostream>
#include <fstream>
#include<vector>

#include <string>
using namespace std;

void loadData(vector <string>& vec, string pathFile) {
    fstream MyFile;
    MyFile.open(pathFile, ios::in);

    if (MyFile.is_open()) {

        string Line;
        while (getline(MyFile, Line)) {    
            vec.push_back(Line);
        }
        MyFile.close();
    }

}
int main() {
  
    vector <string> v; 
    loadData(v, "MyFile.txt");

    for (string& y : v)
        cout << y << endl;
    return 0;
}
