#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> test(10, 2);
    for (auto i = test.begin(); i != test.end(); i++)
    {
        *i = *i*2;
    }
    for (auto i = test.begin(); i != test.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}