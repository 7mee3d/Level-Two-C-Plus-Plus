#include <iostream>

void function_c() {
    std::cout << "Inside function_c" << std::endl;
}

void function_b() {
    std::cout << "Inside function_b" << std::endl;
    function_c();
    std::cout << "Back in function_b" << std::endl;
}

void function_a() {
    std::cout << "Inside function_a" << std::endl;
    function_b();
    std::cout << "Back in function_a" << std::endl;
}

int print(int n) {

}
int main() {
    std::cout << "Inside main" << std::endl;
    function_a();
    std::cout << "Back in main" << std::endl;
    return 0;
}