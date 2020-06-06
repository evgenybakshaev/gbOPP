#ifndef STACK_H
#define STACK_H
#include <iostream>

class Stack
{
private:
    const unsigned int MAXLEN = 10;
    int buf[10];
    unsigned int len;

public:
    Stack();

    void reset();
    bool push(int x);
    int pop();
    void print();
};

#endif // STACK_H
