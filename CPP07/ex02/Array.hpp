#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
private:
    T* data;
    unsigned int len;
public:
    Array() : data(NULL), len(0) {}
    Array(unsigned int n) : data(new T[n]()), len(n) {}
    Array(const Array& copy) : data(new T[copy.len]), len(copy.len) {
        for (unsigned int i = 0; i < len; ++i) {
            data[i] = copy.data[i];
        }
    }
    ~Array() {
        delete[] data;
    }
    Array& operator=(const Array& copy) {
        if (this != &copy) {
            delete[] data;
            len = copy.len;
            data = new T[len];
            for (unsigned int i = 0; i < len; ++i) {
                data[i] = copy.data[i];
            }
        }
        return *this;
    }
    T& operator[](unsigned int index) {
        if (index >= len) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
    const T& operator[](unsigned int index) const {
        if (index >= len) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
    unsigned int size() const {
        return len;
    }
};

#endif