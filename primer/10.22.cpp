#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool is_shorter_than(const string &s, const size_t &n)
{
    return s.length() < n ? true : false;
}

int main()
{
    // 10.22
    vector<string> vec = {"123", "12345", "123456", "12345678"};
    cout << count_if(vec.cbegin(), vec.cend(), bind(is_shorter_than, _1, 6)) << endl;
    
    // 10.24
    vector<int> veci = {1, 2, 3, 4, 5};
    string s = "123";
    cout << *find_if(veci.cbegin(), veci.cend(), bind(is_shorter_than, s, _1)) << endl;
}