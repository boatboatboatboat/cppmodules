//
// Created by boat on 6/4/20.
//

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    switch (rand() % 3) {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
        default: break;
    }
    /* unreachable */
    return NULL;
}

void identify_from_pointer(Base * p) {
    try {
        A* a = dynamic_cast<A*>(p);
        if (a != NULL) {
            std::cout << "A" << std::endl;
            return;
        }
    } catch (...) {}
    try {
        B* a = dynamic_cast<B*>(p);
        if (a != NULL) {
            std::cout << "B" << std::endl;
            return;
        }
    } catch (...) {}
    try {
        C* a = dynamic_cast<C*>(p);
        if (a != NULL) {
            std::cout << "C" << std::endl;
            return;
        }
    } catch (...) {}
}

void identify_from_reference(Base & p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (...) {}
    try {
        B& a = dynamic_cast<B&>(p);
        (void)a;
        std::cout << "B" << std::endl;
        return;
    } catch (...) {}
    try {
        C& a = dynamic_cast<C&>(p);
        (void)a;
        std::cout << "C" << std::endl;
        return;
    } catch (...) {}
}

int main() {
    srand(420);

    {
        std::cout << "1 ";
        Base *x = generate();
        identify_from_pointer(x);
        delete x;
    }
    {
        std::cout << "2 ";
        Base *x = generate();
        identify_from_pointer(x);
        delete x;
    }
    {
        std::cout << "3 ";
        Base *x = generate();
        identify_from_pointer(x);
        delete x;
    }
    {
        std::cout << "4 ";
        Base *x = generate();
        identify_from_pointer(x);
        delete x;
    }
    {
        std::cout << "5 ";
        Base *x = generate();
        identify_from_pointer(x);
        delete x;
    }
    A a;
    B b;
    C c;
    std::cout << "refs" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    return 0;
}
