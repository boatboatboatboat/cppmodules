//
// Created by Djevayo Pattij on 3/10/20.
//

#include <iostream>
#include <string>

int main()
{
    std::string some_string = "HI THIS IS BRAIN";

    std::string* ptr = &some_string;
    std::string& ref = some_string;
    std::cout << "from ptr: " << *ptr << std::endl;
    std::cout << "from ref: " << ref << std::endl;
    return 0;
}
