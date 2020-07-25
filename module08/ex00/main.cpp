//
// Created by boat on 5/15/20.
//

#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>

int main()
{
    std::cout << "Vector:\n";
    {
        std::vector<int> heck;

        heck.push_back(1);
        heck.push_back(2);
        heck.push_back(3);
        heck.push_back(4);
        heck.push_back(5);

        {
            std::vector<int>::iterator it = find(heck, 1);

            std::cout << "1: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::vector<int>::iterator it = find(heck, 3);

            std::cout << "3: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::vector<int>::iterator it = find(heck, 7);

            std::cout << "7: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
    }
    std::cout << "List:\n";
    {
        std::list<int> heck;

        heck.push_back(1);
        heck.push_back(2);
        heck.push_back(3);
        heck.push_back(4);
        heck.push_back(5);
        {
            std::list<int>::iterator it = find(heck, 1);

            std::cout << "1: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::list<int>::iterator it = find(heck, 3);

            std::cout << "3: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::list<int>::iterator it = find(heck, 7);

            std::cout << "7: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
    }
    std::cout << "Deque:\n";
    {
        std::deque<int> heck;

        heck.push_back(1);
        heck.push_back(2);
        heck.push_back(3);
        heck.push_back(4);
        heck.push_back(5);
        {
            std::deque<int>::iterator it = find(heck, 1);

            std::cout << "1: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::deque<int>::iterator it = find(heck, 3);

            std::cout << "3: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::deque<int>::iterator it = find(heck, 7);

            std::cout << "7: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
    }
    std::cout << "Set:\n";
    {
        std::set<int> heck;

        heck.insert(1);
        heck.insert(2);
        heck.insert(3);
        heck.insert(4);
        heck.insert(5);
        {
            std::set<int>::iterator it = find(heck, 1);

            std::cout << "1: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::set<int>::iterator it = find(heck, 3);

            std::cout << "3: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
        {
            std::set<int>::iterator it = find(heck, 7);

            std::cout << "7: ";
            if (it != heck.end()) {
                std::cout << *it;
            } else {
                std::cout << "not found";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}
