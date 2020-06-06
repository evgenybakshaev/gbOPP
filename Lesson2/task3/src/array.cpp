#include "array.h"

Array::Array()
    :Array(0,0)
{

}

Array::Array(unsigned short count, unsigned short start_value = 0)
    : m_count(count)
{
    if(count > MAX)
        count = MAX;

    while(count)
        m_arr[--count] = start_value;
}

int Array::getElement(unsigned short index)
{
    if(index < m_count)
        return m_arr[index];
    else
        return -1;
}

int Array::setElement(unsigned short index, int value)
{
    if(index < m_count)
    {
        m_arr[index] = value;
        return 0;
    }
    else
        return -1;
}
