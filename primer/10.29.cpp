#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main() {
    ifstream in("10.20.cpp");
    istream_iterator<string> ii(in), eof;
    vector<string> vec(ii, eof);

    ostream_iterator<string> oi(cout, " ");
    copy(vec.begin(), vec.end(), oi);
}