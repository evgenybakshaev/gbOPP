#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

std::vector<int> plus(const std::vector<int> &A, const std::vector<int> &B, uint8_t base)
{
    std::vector<int> C;
    std::vector<int>::const_reverse_iterator itA = A.rbegin();
    std::vector<int>::const_reverse_iterator itB = B.rbegin();
    int digit = 0;

    do
    {
        if(itA != A.rend())
        {
            digit += *itA;
            itA++;
        }
        if(itB != B.rend())
        {
            digit += *itB;
            itB++;
        }
        C.insert(C.begin(),digit % base);
        digit /= base;
    }while(itA != A.rend() || itB != B.rend());

    if(digit)
        C.insert(C.begin(), digit);

    return C;
}

std::pair<std::vector<int>,int> div(const std::vector<int> &A, uint8_t baseIn, uint8_t divider)
{
    std::vector<int> C;
    std::vector<int>::const_iterator it = A.begin();
    int digit = 0;

    do
    {
        digit = digit*baseIn + *it;
        if(digit/divider)
        {
            C.push_back(digit/divider);
            digit = digit % divider;
        }
        else
        {
            digit = *it;
        }
        it++;
    }while(it != A.end());

    return std::pair<std::vector<int>,int>(C,digit);;
}

void printVector(const std::vector<int> A)
{

    std::for_each(A.begin(),A.end(),[](const int &n)
    {
        const char *c = "0123456789ABCDEFGHIJKLMNOPRSTUVWXYZ";
        std::cout << c[n];
    });

    std::cout << std::endl;
}

std::vector<int> convertBase(const std::vector<int> A, uint8_t baseIn, uint8_t baseOut)
{
    std::vector<int> C;
    std::vector<int> temp;
    long long digit = 0;
    for(int i = A.size() - 1, weight = 1; i >= 0; --i, weight *= baseIn)
    {
        temp.clear();
        digit = A[i] * weight;
        do
            temp.insert(temp.begin(), digit % baseOut);
        while((digit/=baseOut));
        C = plus(C,temp, baseOut);
    }
    return C;
}

std::vector<int> convertBase2(const std::vector<int> A, uint8_t baseIn, uint8_t baseOut)
{
    std::vector<int> C;
    std::vector<int> t = A;
    std::pair<std::vector<int>,int> p;

    do
    {
        p = div(t,baseIn,baseOut);
        C.insert(C.begin(), p.second);
        t = p.first;
    }while(t.size() > 1 || t[0] > baseOut);
    C.insert(C.begin(), t[0]);
    return C;
}

std::vector<int> plus(const std::vector<int> &A, uint8_t baseA, const std::vector<int> &B, uint8_t baseB, int baseResult)
{
    return plus(convertBase(A, baseA, baseResult), convertBase(B, baseB, baseResult), baseResult);
}

int main(int argc, char** args)
{
    enum n {A=10,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,R,S,T,U,V,W,X,Y,Z};
    std::vector<int> vA {F,F};
    uint8_t baseA = 16;
    std::vector<int> vB {H,E,L,L,O};
    uint8_t baseB = 36;

    std::cout << "Number A in a positional base "<< baseA <<" numeral system:" << std::endl;
    printVector(convertBase2(vA, baseA, baseA));
    std::cout << "Number A in a positional base 10 numeral system:" << std::endl;
    printVector(convertBase2(vA, baseA, 10));
    std::cout << "Number B in a positional base "<< baseB <<" numeral system:" << std::endl;
    printVector(convertBase2(vB, baseB, baseB));
    std::cout << "Number B in a positional base 10 numeral system:" << std::endl;
    printVector(convertBase2(vB, baseB, 10));

    std::cout << "Result A + B in a positional base 2 numeral system:" << std::endl;
    printVector(plus(vA, baseA, vB, baseB, 2));

  return 0;
}
