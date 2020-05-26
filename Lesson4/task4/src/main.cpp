#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

std::vector<int> plus(const std::vector<int> &A, const std::vector<int> &B, int base)
{
//    uint sizeA = A.size();
//    uint sizeB = B.size();
//    uint sizeC = sizeA >= sizeB ? sizeA + 1 : sizeB + 1;
    std::vector<int> C;
    C = B;
    int digit = 0;
    for(int i = C.size()-1, j = A.size() - 1; i > 0; --i)
    {
        if(j >= 0)
            digit += A.at(j);
        digit += C[i];
        C[i] = (C[i] + digit) % base;
        if((digit /= base) && (i > 0))
            C[i-1] += digit;
        else
            C.insert(C.begin(), digit);

    }


    return C;
}

void printVector(const std::vector<int> A)
{
    std::for_each(A.begin(),A.end(),[](const int &n){ std::cout << n; });
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

std::vector<int> plus(const std::vector<int> &A, int baseA, const std::vector<int> &B, int baseB, int baseResult)
{
    return plus(convertBase(A, baseA, baseResult), convertBase(B, baseB, baseResult), baseResult);
}

int main(int argc, char** args)
{
    std::vector<int> A {6,4};
    std::vector<int> B {6,4};

    printVector(convertBase(A, 16, 10));
    printVector(convertBase(B, 16, 10));

    //printVector(plus(A, 16, B, 16, 10));

  return 0;
}
