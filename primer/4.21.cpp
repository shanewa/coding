#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> test = {1,2,3,4,5,6,7,8,9,10};
    for (auto i : test)
    {
        if (i % 2 ? 1 : 0)
        {
            cout << i * 2 << endl;
        }
    }
    return 0;
}