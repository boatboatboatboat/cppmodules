//
// Created by Djevayo Pattij on 1/12/20.
//

#include <iostream>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}
