#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main()
{
    list<int> vec;
    fill_n(back_inserter(vec), 10, 2);
    for (const auto &i : vec)
    {
        cout << i << endl;
    }
}