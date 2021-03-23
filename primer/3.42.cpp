#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> test1 = {1, 2, 3, 4};
    int test2[4] = {};
    int *pbeg = test2;
    for (auto i : test1)
    {
        *pbeg = i;
        pbeg++;
    }
    for (auto i : test2)
    {
        cout << i << endl;
    }

    return 0;
}