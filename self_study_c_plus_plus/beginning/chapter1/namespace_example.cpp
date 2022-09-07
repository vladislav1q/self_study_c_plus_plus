#include <iostream>

namespace haha{
    
    std::string name = "haha namespace";

    // first default version
    inline namespace v1{
        void print_out (auto &var){
            std::cout << var;
        }
    }
    
    // new version
    namespace v2{
        void print_out (auto &var){
            std::cout << var << std::endl;
        }
    }
}

int main(){

    std::cout << "Function called from " << haha::name << std::endl;

    haha::print_out("12345");
    haha::print_out("\n");
    
    haha::v2::print_out("12345");

    return 0;
}
