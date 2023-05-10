#ifndef _TF_VECTOR_HPP_
#define _TF_VECTOR_HPP_

#include <iostream>
#include <memory>
#include "../TechFlow.hpp"

template <typename T>
class TF_Vector
{
    /// Private Variables:
    static int indexCount;
    int size;
    std::unique_ptr<T[]> data;

public:
    /// Constructors:
    /// Default Constructor:
    TF_Vector() : size(0), data(nullptr)
    {
        resetIndexCounter();
    }

    /// Constructor with 2 parameters:
    TF_Vector(int ksize, T elem)
    {
        size = ksize;
        if (size < 0)
        {
            throw std::invalid_argument("Size must be non-negative");
        }
        data = std::make_unique<T[]>(size);
        for (int i = 0; i < size; i++)
            data[i] = elem;
    }

    /// Copy Constructor:
    TF_Vector(const TF_Vector<T> &other)
    {
        size = other.size;
        data = std::make_unique<T[]>(size);
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
    ~TF_Vector() {}

    /// '=' Operator redefined:
    void operator=(const TF_Vector<T> &other)
    {
        size = other.size;
        data = std::make_unique<T[]>(size);
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    /// Move assignment operator
    TF_Vector &operator=(TF_Vector &&other) noexcept
    {
        if (this != &other)
        {
            data = std::move(other.data);
            size = other.size;
            other.size = 0;
        }
    }

    /// '<<' Operator redefined:
    friend std::ostream &operator<<(std::ostream &out, const TF_Vector<T> &vector)
    {
        for (int i = 0; i < vector.size; i++)
        {
            out << indexCount << ". " << vector.data[i];
            incrementIndexCounter();
        }
        return out;
    }

    /// '>>' Operator redefined:
    friend std::istream &operator>>(std::istream &in, TF_Vector<T> &vector)
    {
        std::cout << "N=";
        in >> vector.size;
        if (vector.size < 0)
        {
            throw std::invalid_argument("Size must be non-negative");
        }
        vector.data = std::make_unique<T[]>(vector.size);
        for (int i = 0; i < vector.size; i++)
            in >> vector.data[i];
        return in;
    }

    /// pushback <=> push_back
    void pushback(T elem)
    {
        std::unique_ptr<T[]> newData = std::make_unique<T[]>(size + 1);
        for (int i = 0; i < size; i++)
        {
            newData[i] = data[i];
        }
        newData[size] = elem;
        data = std::move(newData);
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

    T *begin()
    {
        return &data[0];
    }

    T *end()
    {
        return &data[size];
    }

    /// Static Methods
    // Static method to increment the index counter
    static void incrementIndexCounter()
    {
        indexCount++;
    }

    // Static method to reset the index counter to 1
    static void resetIndexCounter()
    {
        indexCount = 1;
    }
};

template <typename T>
int TF_Vector<T>::indexCount = 1;

#endif