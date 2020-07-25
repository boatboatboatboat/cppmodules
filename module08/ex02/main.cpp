//
// Created by boat on 6/15/20.
//

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    MutantStack<int> ms;
    ms.push(1);
    ms.push(2);
    ms.push(3);
    ms.push(4);
    ms.push(5);
    {
        std::cout << "Iterator:\n";
        MutantStack<int>::iterator rit = ms.begin();
        for (; rit != ms.end(); ++rit) {
            std::cout << *rit << std::endl;
        }
        std::cout << "Const iterator:\n";
        MutantStack<int>::const_iterator rcit = ms.begin();
        for (; rcit != ms.end(); ++rcit) {
            std::cout << *rcit << std::endl;
        }
    }
    {
        std::cout << "Reverse iterator:\n";
        MutantStack<int>::reverse_iterator rit = ms.rbegin();
        for (; rit != ms.rend(); ++rit) {
            std::cout << *rit << std::endl;
        }
        std::cout << "Reverse const iterator:\n";
        MutantStack<int>::const_reverse_iterator rcit = ms.rbegin();
        for (; rcit != ms.rend(); ++rcit) {
            std::cout << *rcit << std::endl;
        }
    }
    return 0;
}
