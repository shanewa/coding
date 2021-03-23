#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    list<int> l;
    // Notice: rbeign points to 10, rend points to '0'
    copy(v.rbegin() + 2, v.rend() - 2, back_inserter(l));
    
    ostream_iterator<int> oi(cout, " ");
    copy(l.begin(), l.end(), oi);
}