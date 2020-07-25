//
// Created by boat on 6/15/20.
//

#ifndef CPPMODULES_SPAN_HPP
#define CPPMODULES_SPAN_HPP

#include <stdexcept>
#include <vector>

class Span {
public:
    explicit Span(unsigned int n);
    Span(Span const& other);
    ~Span();
    void addNumber(int n);
    unsigned long shortestSpan() const;
    unsigned long longestSpan() const;
    template <typename I>
    void addNumber(I begin, I end)
    {
        if (std::distance(begin, end) + this->numbers.size() > this->max_size)
            throw std::runtime_error("attempted to add too many numbers");

        this->numbers.insert(this->numbers.end(), begin, end);
    }

private:
    std::vector<int> numbers;
    unsigned int max_size;
    Span();
    Span& operator=(Span const& other);
};

#endif //CPPMODULES_SPAN_HPP
