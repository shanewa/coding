#include <iostream>
#include <fstream>
#include <iterator>
#include <map>
#include <set>
using namespace std;

int main() {
    string word;
    string filename;        
    map<string, unsigned int> m;
    set<char> s = {',', '.', '!', '{', '}', '"', '\''};

    // cin >> filename;
    // ifstream in(filename);
    ifstream in("11.4.txt");
    while (in >> word) {
        auto i = word.begin();
        while (i != word.end()) {
            if (s.find(*i) == s.end()) {
                *i = tolower(*i);
                ++i;
            } else {
                i = word.erase(i);
            }
        }
        ++m[word];
    }
    for (auto i : m) {
        cout << i.first << "\t" << i.second << endl;
    }
}