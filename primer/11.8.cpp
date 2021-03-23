#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<string> v1 = {"wang", "shuai", "shuai"};
    vector<string> v2(v1);
    // vector<string> v2(v1.size());
    // copy(v1.cbegin(), v1.cend(), v2.begin());
    
    // Remove the dumplex items
    // Or, use find to check the duplex when insert into v2.
    sort(v2.begin(), v2.end());
    auto new_end = unique(v2.begin(), v2.end());
    v2.erase(new_end, v2.end());

    ostream_iterator<string> oi(cout, " ");
    copy(v1.cbegin(), v1.cend(), oi);
    cout << endl;
    copy(v2.cbegin(), v2.cend(), oi);
    cout << endl;
}