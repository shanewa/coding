#include <iostream>
#include <list>
#include <vector>
#include <utility>
using namespace std;

int main() {
    list<string> s = {"one", "two", "three"};
    list<int> i = {1, 2, 3};
    vector<pair<string, int>> v;
    auto si = s.cbegin();
    auto ii = i.cbegin();
    while (si != s.cend()) {
        // v.push_back(make_pair(*si, *ii));
        v.push_back(pair<string, int>(*si, *ii));
        ++si;
        ++ii;
    }
}