#include <iostream>
#include <iterator>
#include <vector>
#include <list>
using namespace std;

int main()
{
    vector<int> vec(4);
    list<int> lst;
    int i;
    unsigned n=0;
    while (n++<=3)
    {
        cin >> i;
        lst.push_back(i);
    }
    copy(lst.cbegin(), lst.cend(), vec.begin());
    for (const auto &i : vec)
    {
        cout << i << endl;
    }
}