#include <iostream>
#include <fstream>
#include <iterator>
#include <map>
using namespace std;

int main() {
    string filename;
    cin >> filename;
    ifstream in(filename);
    string word;
    map<string, unsigned int> m;
    while (in >> word) {
        auto r = m.insert({word, 1});
        if (!r.second) {
            ++(r.first->second);
        }
    }
    for (auto i : m) {
        cout << i.first << "\t" << i.second << endl;
    }
}