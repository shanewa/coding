#include <iostream>
#include <vector>
using namespace std;

int test(int v1, int v2)
{
    return (v1 > v2 ? v1 : v2);
}

int main()
{
    typedef int (*T)(int, int);
    // T TT = test;
    // cout << TT(2, 1)<< endl;
    vector<T> TT;
    TT.push_back(test);
    cout << TT[0](2, 1)<< endl;

    return 0;
}