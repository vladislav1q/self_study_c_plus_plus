#include <iostream>

#define MESSAGE(c, v) \
for(int i = 1; i < c; i++) std::cout << v[i] << std::endl;

int main(int argc, char* argv[]){

    MESSAGE(argc,argv);

    return 0;
}
