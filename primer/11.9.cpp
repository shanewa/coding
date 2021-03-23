#include <iostream>
#include <map>
#include <list>
using namespace std;

int main() {
    list<size_t> n = {1,2,3,4,5};
    list<string> v = {"one", "two", "three", "four", "five"};
    map<string, size_t> m;
    auto nb = n.cbegin();
    auto vb = v.cbegin();
    while (nb != n.cend()) {
        m[*vb] = *nb;
        ++vb;
        ++nb;
    }
}