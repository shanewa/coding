#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 10.20
int string_longer_than(const vector<string> &vec, const unsigned &i)
{
    return count_if(vec.cbegin(), vec.cend(), [&i] (const string &s) -> bool {return s.length() > i ? true : false;});
}

int main()
{
    vector<string> vec = {"1234567", "1234", "12345678"};
    // cout << string_longer_than(vec, 5) << endl;

    // 10.21
    int n = 10;
    auto f = [&n] () ->bool {return n != 0 ? --n : false;};
    while (f())
    {
        cout << n << endl;
    }
}