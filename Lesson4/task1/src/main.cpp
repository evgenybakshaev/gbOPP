#include <iostream>
#include "arrayint.h"
using namespace std;

void print(const ArrayInt &arr)
{
    for(int i = 0; i < arr.getLength(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(int argc, char** args)
{
    ArrayInt arr(10);
    arr[2] = 2;
    print(arr);

    arr.erase();
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(22);
    print(arr);
    arr.resize(10);
    arr[3] = -11;
    arr.insertBefore(30,3);
    arr.push_back(12);
    print(arr);
    arr.pop_back();
    print(arr);

    arr.sort();
    print(arr);

    return 0;
}
