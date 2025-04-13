

#include <iostream>
using namespace std; 

int add(int x, int y) {
	return x + y; 

}

void print(void) {
	cout << "Hello "; 
}
int main()
{
	//Parameter 
	int (*Function) (int, int) = add; 

	cout << Function(5, 5); 

	// Parameter void 

	void (*FunctionPrint) (void) = print; 

	FunctionPrint(); 
}

