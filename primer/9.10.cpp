#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() 
{
    // 9.10
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    *it1 = 1;
    // *it2 = 2;

    // 9.13
    list<int> l1 = {1, 2, 3, 4, 5};
    vector<double> d1(l1.begin(), l1.end()--);

    // 9.14
    list<char *> l2;
    vector<string> v3(l2.begin(), l2.end()--);
}