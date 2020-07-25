//
// Created by boat on 5/15/20.
//

#ifndef CPPMODULES_EASYFIND_HPP
#define CPPMODULES_EASYFIND_HPP

#include <algorithm>
#include <cstddef>

template <typename T>
typename T::iterator find(T& haystack, int needle)
{
    return std::find(haystack.begin(), haystack.end(), needle);
}

#endif //CPPMODULES_EASYFIND_HPP
