#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    map<string, vector<string>> family;
    family["wang"] = {"shuai", "yunzhong"};

    // Add new
    family["li"] = {"liyuan", "xiumin"};

    // Add new member to the existing family
    family["wang"].push_back("zhigui");

    // Print
    ostream_iterator<string> ii(cout, " ");
    for (auto i : family) {
        cout << "first name = " << i.first << ": ";
        copy(i.second.cbegin(), i.second.cend(), ii);
        cout << endl;
    }
}