#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ofstream o1("even.o");
    ofstream o2("odd.o");
    ostream_iterator<int> oi1(o1, "\n");
    ostream_iterator<int> oi2(o2, "\n");
    istream_iterator<int> ii(cin), eof;
    vector<int> vec(ii, eof);
    for (auto i : vec) {
        if (i%2) {
            oi1 = i;
        } else {
            oi2 = i;
        }
    }
}