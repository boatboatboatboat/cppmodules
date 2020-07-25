//
// Created by Djevayo Pattij on 1/12/20.
//

#include "Pony.hpp"
#include <cstdlib>
#include <iostream>
#include <new>

void ponyOnTheHeap()
{
    Pony* pony = new (std::nothrow) Pony;
    if (pony == NULL) {
        std::cout << "Failed to allocate a pony on the heap" << std::endl;
        return;
    }
    pony->walk();
    delete pony;
}

void ponyOnTheStack()
{
    Pony pony;
    pony.walk();
}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    system("leaks ponytester");
}
