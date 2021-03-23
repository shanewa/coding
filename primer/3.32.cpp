#include <iostream>
using namespace std;

int main()
{
    int test[] = {1, 2, 3, 4};
    // int *pbeg = begin(test);
    // int *pbeg = test;
    int *pbeg = &(test[0]);
    int *pend = end(test);
    while (pbeg != pend)
    {
        *pbeg = 0;
        pbeg++;        
    }

    for (auto i : test)
    {
        cout << i << endl;
    }

    return 0;
}