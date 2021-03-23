#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

int main() {
    multiset<string> c = {"1", "1", "2"};
    vector<string> v = {"3", "4"};
    ostream_iterator<string> oi(cout, " ");

    // copy(v.begin(), v.end(), inserter(c, c.end()));
    // copy(c.cbegin(), c.cend(), oi);

    // // Wrong. No push_back for set
    // copy(v.begin(), v.end(), back_inserter(c));
    // copy(c.cbegin(), c.cend(), oi);

    // copy(c.begin(), c.end(), inserter(v, v.end()));
    // copy(v.cbegin(), v.cend(), oi);

    copy(c.begin(), c.end(), back_inserter(v));
    copy(v.cbegin(), v.cend(), oi);
}