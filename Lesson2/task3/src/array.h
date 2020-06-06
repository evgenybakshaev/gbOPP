#ifndef ARRAY_H
#define ARRAY_H


class Array
{
private:
    static const int MAX = 10;
    unsigned short m_count;
    int m_arr[MAX];

public:
    Array();
    Array(unsigned short count, unsigned short start_value);

    int getElement(unsigned short index);
    int setElement(unsigned short index, int value);
};

#endif // ARRAY_H
