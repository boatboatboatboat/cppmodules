//
// Created by Djevayo Pattij on 3/10/20.
//

#include <iostream>
#include <string>

int main()
{
    try {
        std::string some_string = "HI THIS IS BRAIN";

        std::string *ptr = &some_string;
        std::string &ref = some_string;
        std::cout << "from ptr: " << *ptr << std::endl;
        std::cout << "from ref: " << ref << std::endl;
    } catch (...) {
        std::cout << "nice error" << std::endl;
    }
    return 0;
}
