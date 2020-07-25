//
// Created by boat on 5/15/20.
//

#ifndef CPPMODULES_ARRAY_HPP
#define CPPMODULES_ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
public:
    Array()
    {
        _n = 0;
        _raw = NULL;
    }

    explicit Array(unsigned int n)
    {
        _n = n;
        _raw = new T[n];

        for (unsigned int idx = 0; idx < n; idx += 1) {
            _raw[idx] = T();
        }
    }

    Array(const Array& original)
    {
        _n = original.size();
        _raw = new T[_n];

        for (unsigned int idx = 0; idx < _n; idx += 1) {
            _raw[idx] = original[idx];
        }
    }

    Array& operator=(const Array& original)
    {
        if (this != &original) {
            delete[] _raw;
            _n = original.size();
            _raw = new T[_n];

            for (unsigned int idx = 0; idx < _n; idx += 1) {
                _raw[idx] = original[idx];
            }
        }
        return *this;
    }

    T& operator[](unsigned int idx)
    {
        if (idx >= _n) {
            throw std::out_of_range("index is greater than size");
        }

        return _raw[idx];
    }

    T const& operator[](unsigned int idx) const
    {
        if (idx >= _n) {
            throw std::out_of_range("index is greater than size");
        }

        return _raw[idx];
    }

    ~Array()
    {
        delete[] _raw;
    }

    unsigned int size() const
    {
        return _n;
    }

private:
    T* _raw;
    unsigned int _n;
};

#endif //CPPMODULES_ARRAY_HPP
