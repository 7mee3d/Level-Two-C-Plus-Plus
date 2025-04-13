

#include <iostream>
#include <vector> 

using namespace std; 

int main()
{
    vector <int> vec; 

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "\n the size of the vector = " << vec.size() << endl; 

    for (int& i : vec) {
        cout << i << endl;
    } 
    vec.pop_back(); 
    vec.pop_back(); 
    vec.pop_back(); 
    vec.pop_back(); 

    cout << endl << endl; 
    cout << "Vector after removing \n";
    for (int& i : vec) {
        cout << i << endl; 
    }
    cout << endl; 
    vec.pop_back();
    for (int& i : vec) {
        cout << i << endl;
    } 

    if (!vec.empty ())
    vec.pop_back();
}

