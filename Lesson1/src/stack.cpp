#include "stack.h"

using namespace std;
Stack::Stack()
{
    reset();
}

void Stack::reset()
{
    for(unsigned int i = 0; i < MAXLEN; i++)
        buf[i] = 0;
    len = 0;
}

bool Stack::push(int x)
{
    if(len < MAXLEN)
    {
        buf[len++] = x;
        return true;
    }
    else
    {
       return false;
    }
}

int Stack::pop()
{
    if(len > 0)
        return buf[len--];
    else
    {
        cout << "Warning: The stack is empty" << endl;
        return 0;
    }
}

void Stack::print()
{
    cout << "( ";
    for(unsigned int i = 0; i < len; i++)
    {
         cout << buf[i] << " ";
    }
    cout << ")" << endl;
}
