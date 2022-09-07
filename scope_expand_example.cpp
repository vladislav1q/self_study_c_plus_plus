#include <iostream>
#include <string.h>

std::string get_some_str(){
    static std::string some_str;
    // std::string some_str;
    return some_str.append("hello! ");
}

int main(){

    std::cout << get_some_str() << std::endl;
    std::cout << get_some_str() << std::endl;

    return 0;
}
