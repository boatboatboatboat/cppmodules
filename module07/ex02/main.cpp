#include "Array.hpp"
#include <iostream>

int other()
{
    Array<int> bruh(10);

    bruh[3] = 420;
    try {
        for (unsigned int i = 0; i < 11; i += 1) {
            std::cout << bruh[i] << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << "An exception was caught: " << e.what() << std::endl;
    }

    Array<int> x = bruh;
    Array<int> y;
    y = bruh;

    bruh[0] = 123;
    x[1] = 456;
    y[2] = 789;

    // recheck bruh
    std::cout << "checking bruh (simple) of size " << bruh.size() << '\n';
    for (unsigned int i = 0; i < 10; i += 1) {
        std::cout << bruh[i] << '\n';
    }

    // check x
    std::cout << "checking x (copy assignment) of size " << x.size() << '\n';
    ;
    for (unsigned int i = 0; i < 10; i += 1) {
        std::cout << x[i] << '\n';
    }

    std::cout << "checking y (direct assignment) of size " << y.size() << '\n';
    // check y
    for (unsigned int i = 0; i < 10; i += 1) {
        std::cout << y[i] << '\n';
    }

    Array<int> a(12);

    // initialize a with 0-11
    for (unsigned int i = 0; i < 12; i += 1) {
        a[i] = i;
    }
    std::cout << "checking a (0-11 array) of size " << a.size() << '\n';
    for (unsigned int i = 0; i < 12; i += 1) {
        std::cout << a[i] << '\n';
    }

    Array<int> b;

    // test empty array
    std::cout << "checking b (empty)" << '\n';
    std::cout << "size of array b: " << b.size() << '\n';
    try {
        std::cout << b[0] << std::endl;
    } catch (std::exception& e) {
        std::cout << "An exception was caught: " << e.what() << std::endl;
    }

    // test const
    const Array<int> c = x;
    std::cout << "checking c (const copy of c)\n";
    std::cout << "sizeof array c: " << c.size() << '\n';
    for (unsigned int i = 0; i < 10; i += 1) {
        std::cout << c[i] << '\n';
    }

    std::cout << std::flush;
    return 0;
}

int main()
{
    int x = other();
    system("leaks ex02");
    return x;
}
