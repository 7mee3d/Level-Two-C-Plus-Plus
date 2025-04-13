// More Methods String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 

using namespace std; 

int main()
{
    string testWord = { "This is Test Word " }; 
    cout << "This is length of string word : " << testWord.length() << endl; 
    cout << "This is first Letter in string word : " << testWord.at(0) << endl; 
    testWord.append("Ahmed ");
    cout << testWord << endl; 
    testWord.insert(24, " Testt");
    cout << testWord << endl; 

    testWord.push_back('X');
    testWord.pop_back(); 

    
    cout << testWord.find("A") << endl;
    if (testWord.find('X') == string::npos)
        cout << "This Character not Found \n";
    else cout << "Founded "; 


    cout << endl  << endl; 
        
    testWord.clear();
    cout << testWord << endl; 


}
