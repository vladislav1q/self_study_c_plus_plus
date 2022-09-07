#include <iostream>

int main(){

    enum numbers : int {a = 1, b = 2, c = 4};
    // enum numbers : int {a, b, c}; // 0 1 2 ... by default
    int some_number = b;

    // enum class numbers : int {a = 1, b = 2, c = 4};
    // numbers some_number = numbers::a; 

    // inbuilt conversion for enum without class, no need for the scope definition
    std::cout << some_number << std::endl;

    return 0;
}
