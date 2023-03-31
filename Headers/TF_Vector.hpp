#ifndef _TF_VECTOR_HPP_
#define _TF_VECTOR_HPP_

#include <iostream>
#include "TechFlow.hpp"

template <typename T>
class TF_Vector
{
    /// Private Variables:
    int size;
    T *data;

public:
    /// Constructors:
    /// Default Constructor:
    TF_Vector() : size(0), data(nullptr) {}

    /// Constructor with 2 parameters:
    TF_Vector(int ksize, T elem)
    {
        size = ksize;
        data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = elem;
    }

    /// Copy Constructor:
    TF_Vector(const TF_Vector<T> &other)
    {
        size = other.size;
        data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }
    /// Move Construtor:
    TF_Vector(TF_Vector &&other) noexcept : data(nullptr), size(0)
    {
        data = other.data;
        size = other.size;
        other.data = nullptr;
        other.size = 0;
    }

    /// Destructor:
    ~TF_Vector()
    {
        delete[] data;
    }

    /// '=' Operator redefined:
    void operator=(const TF_Vector<T> &other)
    {
        delete[] data;
        size = other.size;
        data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    /// Move assignment operator
    TF_Vector &operator=(TF_Vector &&other) noexcept
    {
        if (this != &other)
        {
            delete[] data;
            data = other.data;
            size = other.size;

            other.str = nullptr;
            other.size = 0;
        }
    }

    /// '<<' Operator redefined:
    friend std::ostream &operator<<(std::ostream &out, const TF_Vector<T> &vector)
    {
        for (int i = 0; i < vector.size; i++)
            out << i + 1 << ". " << vector.data[i];
        return out;
    }

    /// '>>' Operator redefined:
    friend std::istream &operator>>(std::istream &in, TF_Vector<T> &vector)
    {
        std::cout << "N=";
        in >> vector.size;
        vector.data = new T[vector.size];
        for (int i = 0; i < vector.size; i++)
            in >> vector.data[i];
        return in;
    }

    /// pushback <=> push_back
    void pushback(T elem)
    {
        T *newData = new T[size + 1];
        for (int i = 0; i < size; i++)
        {
            newData[i] = data[i];
        }
        newData[size] = elem;
        delete[] data;
        data = newData;
        size++;
    }

    /// getter for size
    int getSize()
    {
        return size;
    }

    /// '[]' Operator redefined:
    T &operator[](int index)
    {
        if (index < 0 || index >= size)
        {
            throw std::out_of_range("Invalid index");
        }
        return data[index];
    }

    /// '[]' Operator redefined:
    const T &operator[](int index) const
    {
        if (index < 0 || index >= size)
        {
            throw std::out_of_range("Invalid index");
        }
        return data[index];
    }
};

#endif