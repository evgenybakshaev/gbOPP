#include <iostream>


using namespace std;

template <typename T>
class Pair1
{
private:
    T m_first;
    T m_second;
public:
    Pair1(T first, T second)
    {
        m_first = first;
        m_second = second;
    }
    T first() const
    {
        return m_first;
    };
    T second() const
    {
        return m_second;
    };
};

template <typename F, typename S>
class Pair
{
private:
    F m_first;
    S m_second;
public:
    Pair(F first, S second)
    {
        m_first = first;
        m_second = second;
    }
    F first() const
    {
        return m_first;
    };
    S second() const
    {
        return m_second;
    };
};

template <typename T>
class StringValuePair : public Pair<string, T>
{
public:
    StringValuePair(string first, T second)
        : Pair<string, T>(first,second)
    {}
};

int main(int argc, char** args)
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    Pair<int, double> p3(6, 7.8);
    cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
    const Pair<double, int> p4(3.4, 5);
    cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';


    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}
