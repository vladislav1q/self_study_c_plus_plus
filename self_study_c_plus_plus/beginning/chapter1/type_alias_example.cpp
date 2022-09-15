#include <iostream>
#include <iomanip>
#include <vector>

// #define name std::string

int main(){
    // typedef std::string name;
    using name = std::string;

    typedef int birth_date;

    std::vector <std::pair<name,birth_date>> people;
    people.push_back({"John",1995});
    people.push_back({"Alex",2001});
    people.push_back({"Dmitry",2001});

    for(auto person : people){
        std::cout << std::setw(8) << std::setfill(' ') << person.first  << " " << person.second << std::endl;
    }

    people.clear();
    people.shrink_to_fit();

    return 0;
}