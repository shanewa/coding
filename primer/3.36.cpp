#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> test1 = {1, 2, 3, 4};
    vector<int> test2 = {1, 2, 3, 4};

    if (test1 == test2)
    {
        cout << "=" << endl;
    }
    else
    {
        cout << "!=" << endl;
    }

    return 0;
}