#include <iostream>
#include <vector>
using namespace std;

bool testvec(vector<int>::iterator b, vector<int>::iterator e, int n)
{
    while (b != e)
    {
        if (*b == n)
        {
            return true;
        }
        b++;   
    }
    return false;
}

int main()
{
    vector<int> v = {1, 2, 3};
    cout << testvec(v.begin(), v.end(), 2) << endl;
}