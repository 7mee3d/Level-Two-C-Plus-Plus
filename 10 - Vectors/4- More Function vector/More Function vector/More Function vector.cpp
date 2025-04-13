// More Function vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    // Function Adding element and Editing and removing ( clear ) 

    vector <int> testVector; 

    //Add Element 

    testVector.push_back(10);
    testVector.push_back(20);
    testVector.push_back(30);

    // Removing last element add 

    testVector.pop_back(); 

    testVector.emplace_back(40); 
    testVector.emplace_back(50); 
    testVector.emplace_back(60); 

    for (int& i : testVector)
        cout << i << " ";

    testVector.pop_back();
    testVector.pop_back();
    testVector.pop_back();
     

    



    cout << endl << endl << endl; 

    // Adding element to position 


  //  testVector.insert(1, 100); 
  //  testVector.erase(1);

    for (int& i : testVector)
        cout << i << " ";



    // Delete All element in the vector 

    testVector.clear(); 

    // ---------------------

    // Access the element using iindex 
    cout << endl << endl << endl;

    testVector.push_back(10);
    testVector.push_back(20);
    testVector.push_back(30);


    cout << testVector.at(0) << endl; // 10 
    cout << testVector[0] << endl; //10

    cout << testVector.front() << endl; // 10 
    cout << testVector.back() << endl; // 30 


    // ----------------------------
    //Size and Capasity vector 
    cout << endl << endl << endl;

    cout << testVector.size() << endl;
    cout << testVector.capacity() << endl; 

    testVector.resize(3);

    for (int& i : testVector)
        cout << i << " ";


    if (!testVector.empty())
        cout << "\n\nNot Empty"; 


    // iterator 

    //------------------------------
    cout << endl << endl; 

    for (auto i = testVector.begin(); i != testVector.end(); i++) {
        cout << *i << endl; 

  }














}

