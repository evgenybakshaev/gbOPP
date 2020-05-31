#include "arrayint.h"

ArrayInt::ArrayInt(): m_length(0), m_data(nullptr)
{ }

ArrayInt::ArrayInt(int length):
    m_length(length)
{
    assert(length >= 0);

    if (length > 0)
        m_data = new int[length];
    else
        m_data = nullptr;
}

ArrayInt::~ArrayInt()
{
    delete[] m_data;
}

void ArrayInt::erase()
{
    delete[] m_data;

    m_data = nullptr;
    m_length = 0;
}

int ArrayInt::getLength() const
{
    return m_length;
}

int &ArrayInt::operator[](int index) const
{
    assert(index >= 0 && index < m_length);
    return m_data[index];
}

void ArrayInt::resize(int newLength)
{
    if (newLength == m_length)
        return;

    if (newLength <= 0)
    {
        erase();
        return;
    }

    int *data = new int[newLength];

    if (m_length > 0)
    {
        int elementsToCopy = (newLength > m_length) ? m_length : newLength;
        for (int index=0; index < elementsToCopy ; ++index)
            data[index] = m_data[index];
    }
    delete[] m_data;

    m_data = data;
    m_length = newLength;
}

void ArrayInt::insertBefore(int value, int index)
{
    assert(index >= 0 && index <= m_length);

    int *data = new int[m_length+1];

    for (int before=0; before < index; ++before)
        data[before] = m_data[before];
    data[index] = value;
    for (int after=index; after < m_length; ++after)
        data[after+1] = m_data[after];

    delete[] m_data;
    m_data = data;
    ++m_length;
}

void ArrayInt::push_back(int value)
{
    insertBefore(value, m_length);
}

int ArrayInt::pop_back()
{
    int val = m_data[m_length - 1];
    resize(--m_length);
    return val;
}

void ArrayInt::sort()
{
    std::sort(m_data, m_data+m_length);
}

