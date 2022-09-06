#include <iostream>

// Conditional compilation

#define CHECK 2

#ifndef CHECK

#define MESSAGE(c, v) \
for(int i = 1; i < c; i++) std::cout << v[i] << std::endl;

#else

#define MESSAGE(c, v) \
std::cout << "\nDir:\n" << v[0] << std::endl << std::endl;

#endif // CHECK

int main(int argc, char* argv[]){

    MESSAGE(argc,argv);

    return 0;
}
