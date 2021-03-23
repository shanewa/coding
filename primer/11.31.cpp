#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

size_t num = 0;

void print_map(multimap<string, string> m) {
    cout << "------------ " << ++num <<" ------------" << endl;
    for (const auto j : m) {
        cout << "Author: " << j.first << endl;
        cout << "    Book: " << j.second << endl;
    }
    cout << endl;
}

int main() {
    multimap<string, string> m;
    m.insert(make_pair("shane", "1"));
    m.insert(make_pair("shane", "2"));
    m.insert(make_pair("shane", "3"));
    m.insert(make_pair("lerro", "4"));
    m.insert(make_pair("lerro", "5"));
    print_map(m);

    // 11.31
    auto i = m.find("lerro");
    if (i != m.end()) {        
        m.erase(i);
        cout << "OK: Find and erase" << endl;
    } else {
        cout << "Ops: cannot find." << endl;
    }
    print_map(m);

    // 11.32
    m.insert(make_pair("yunzhong", "6"));
    m.insert(make_pair("yunzhong", "7"));
    print_map(m);
    set<string> s;
    for (auto p : m) {
        s.insert(p.first);
    }
    for (const auto j : s) {
        cout << "Author: " << j << endl;
        for (auto q = m.equal_range(j); q.first != q.second; ++q.first) {
            cout << "    Book: " << q.first->second << endl;          
        }
    }
}