//
// Created by boat on 6/15/20.
//

#include "span.hpp"
#include <cstdlib>
#include <iostream>

int main()
{
    // 42 test from the subject.
    {
        std::cout << "42 test:\n";
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }

    // Exception tests
    {
        std::cout << "Exception test for no numbers:\n";
        Span sp = Span(5);
        try {
            std::cout << sp.shortestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "shortest span threw: " << e.what() << std::endl;
        }
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "longest span threw: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Exception test for single number:\n";
        Span sp = Span(5);
        sp.addNumber(1);
        try {
            std::cout << sp.shortestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "shortest span threw: " << e.what() << std::endl;
        }
        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception& e) {
            std::cout << "longest span threw: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Exception test for too many numbers:\n";
        Span sp = Span(5);
        try {
            sp.addNumber(1);
            std::cout << "added 1" << std::endl;
            sp.addNumber(2);
            std::cout << "added 2" << std::endl;
            sp.addNumber(3);
            std::cout << "added 3" << std::endl;
            sp.addNumber(4);
            std::cout << "added 4" << std::endl;
            sp.addNumber(5);
            std::cout << "added 5" << std::endl;
            sp.addNumber(6);
            std::cout << "added 6" << std::endl;
        } catch (std::exception& e) {
            std::cout << "caught exception: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Exception test for zero-sized span:\n";
        Span sp = Span(0);
        try {
            sp.addNumber(1);
            std::cout << "added 1" << std::endl;
            sp.addNumber(2);
            std::cout << "added 2" << std::endl;
            sp.addNumber(3);
            std::cout << "added 3" << std::endl;
            sp.addNumber(4);
            std::cout << "added 4" << std::endl;
            sp.addNumber(5);
            std::cout << "added 5" << std::endl;
            sp.addNumber(6);
            std::cout << "added 6" << std::endl;
        } catch (std::exception& e) {
            std::cout << "caught exception: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    // Negative number tests
    {
        std::cout << "All numbers negative:\n";
        Span sp = Span(5);
        sp.addNumber(-5);
        sp.addNumber(-3);
        sp.addNumber(-17);
        sp.addNumber(-9);
        sp.addNumber(-11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "Positive and negative numbers:\n";
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(-3);
        sp.addNumber(17);
        sp.addNumber(-9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }

    // Add number range
    {
        std::cout << "Number range (small):\n";
        Span sp = Span(5);
        std::vector<int> ints;
        ints.push_back(5);
        ints.push_back(-3);
        ints.push_back(17);
        ints.push_back(-9);
        ints.push_back(11);

        sp.addNumber(ints.begin(), ints.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "Number range exceed (small):\n";
        Span sp = Span(5);
        std::vector<int> ints;
        ints.push_back(5);
        ints.push_back(-3);
        ints.push_back(17);
        ints.push_back(-9);
        ints.push_back(11);
        ints.push_back(11);

        try {
            sp.addNumber(ints.begin(), ints.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            std::cout << std::endl;
        } catch (std::exception& e) {
            std::cout << "Caught error: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    {
        std::cout << "Add giant number range:\n";
        Span sp = Span(10000);
        srand(420);
        std::vector<int> ints;
        ints.reserve(10000);
        for (int i = 0; i < 10000; i += 1)
            ints.push_back(rand() % 10000);
        sp.addNumber(ints.begin(), ints.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
}
