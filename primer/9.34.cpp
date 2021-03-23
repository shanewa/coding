#include <iostream>
#include <string>
#include <forward_list> 
#include <list> 
#include <vector> 
using namespace std;

int main()
{
    vector<int> v = {1};
    auto begin = v.begin();
    while (begin != v.end())
    {
        ++begin;
        begin = v.insert(begin, 42);
        // core dump
        // v.insert(begin, 42);
        ++begin;
    }
    for (const auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}