
#include <iostream>
using namespace std;

int main()
{

	int num = 10; 
	int* pointer = &num; 

	cout << pointer << endl; 
	cout << *pointer << endl; 

	// في حال انا رحت حطيت عنوان متغير غير عن نوع المؤشر هان هيصير ايرور لحل الايرور 
	// راح نعمل مؤشر عام يؤشر علي اي نوع عندي 

	//genark pointer 

	void* pointerGena; 

	float number = 10.5; 

	pointerGena = &number; 

	cout << pointerGena << endl; 


	// error becouse the pointer is genarak 
	// to solve error using casting th pointer is typing variale 

	//cout << *pointerGena << endl; 
	

	cout << *(static_cast <float*> (pointerGena)) << endl; 


	int number2 = 100; 

	pointerGena = &number2; 

	cout << *(static_cast<int*> (pointerGena)) << endl;

	// auto pointer 

	int number5 = 150; 

	auto* p = &number5; 

	cout << *p << endl; 

	float y = 19.4; 

//	p = &y;  //error 


}

