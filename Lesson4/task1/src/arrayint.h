#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert> // для assert()
#include <algorithm>

class ArrayInt
{
private:
    int m_length;
    int *m_data;

public:
    ArrayInt();
    ArrayInt(int length);
    ~ArrayInt();

    void erase();
    int getLength() const;
    int &operator[](int index) const;
    void resize(int newLength);
    void insertBefore(int value, int index);
    void push_back(int value);
    int pop_back();
    void sort();
};


#endif // ARRAYINT_H
