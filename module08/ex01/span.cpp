//
// Created by boat on 6/15/20.
//

#include "span.hpp"
#include <cmath>
#include <stdexcept>

Span::Span(unsigned int n)
    : numbers()
    , max_size(n)
{
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (this->numbers.size() >= this->max_size)
        throw std::length_error("attempted to add too many numbers");
    this->numbers.push_back(n);
}

unsigned long Span::shortestSpan() const
{
    if (this->numbers.size() <= 1)
        throw std::runtime_error("not enough numbers in span");

    std::vector<int>::const_iterator it = this->numbers.begin();

    unsigned long lowest;
    bool lowest_is_some = false;

    for (; it != this->numbers.end(); ++it) {
        std::vector<int>::const_iterator lowit = this->numbers.begin();

        for (; lowit != this->numbers.end(); ++lowit) {
            if (it == lowit)
                continue;
            unsigned long diff = std::abs(*it - *lowit);

            if (lowest_is_some) {
                if (diff < lowest) {
                    lowest = diff;
                }
            } else {
                lowest_is_some = true;
                lowest = diff;
            }
        }
    }

    if (!lowest_is_some)
        throw std::runtime_error("not enough numbers in span");
    return lowest;
}

unsigned long Span::longestSpan() const
{
    if (this->numbers.size() <= 1)
        throw std::runtime_error("not enough numbers in span");

    int lo = *std::min_element(this->numbers.begin(), this->numbers.end());
    int hi = *std::max_element(this->numbers.begin(), this->numbers.end());

    return std::abs(lo - hi);
}
Span::Span(const Span& other)
{
    this->max_size = other.max_size;
    this->numbers = other.numbers;
}
