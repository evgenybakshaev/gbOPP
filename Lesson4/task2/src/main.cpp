#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char** args)
{
    vector<int> v;
    v.reserve(10);
    do
    {
        cout << "Enter " << v.capacity() - v.size() << " integers: ";
        int number;

        while(cin >> number && v.size() < 10)
        {
            v.push_back(number);
            if(cin.get() == '\n')
                break;
            else
                cin.unget();
        }
    } while(v.size() < 10);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort(v.begin(),v.end());
    int difcnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != v[i+1])
            ++difcnt;
    }
    cout << "There are " << difcnt << " differrent numbers in the vector" << endl;
    return 0;
}
