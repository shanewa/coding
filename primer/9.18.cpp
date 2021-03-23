#include <iostream>
#include <deque>
#include <list>
using namespace std;

void ex_918()
{
    // deque<string> d;
    list<string> d;
    string s;
    cin >> s;
    d.emplace_back(s);
    for (const auto &i : d)
    {
        cout << i << endl;
    }
}

int main()
{
    ex_918();
}