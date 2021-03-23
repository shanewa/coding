#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    istream_iterator<int> ii(cin), eof;
    vector<int> vec(ii, eof);
    sort(vec.begin(), vec.end());

    ostream_iterator<int> oi(cout, " ");
    // Print all
    copy(vec.begin(), vec.end(), oi);    
    // Print the unique numbers
    cout << endl;
    unique_copy(vec.begin(), vec.end(), oi);
}