#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

void uniqxx_copy(const vector<int> &v1, list<int> &v2)
{
    unique_copy(v1.begin(), v1.end(), v2.begin());
}

int main()
{
    list<int> v2(4);
    vector<int> v1 = {1, 2, 2, 3, 4, 1};
    uniqxx_copy(v1, v2);
    for_each(v1.cbegin(), v1.cend(), [&](int i){cout << i << endl;});
    cout << "------------------" << endl;
    for_each(v2.cbegin(), v2.cend(), [&](int i){cout << i << endl;});
}