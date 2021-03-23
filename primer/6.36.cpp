#include <iostream>
#include <string>
using namespace std;

string (&fun(string (&str_array)[10]))[10]
{
    return str_array;
}

int main()
{
    string sa[10] = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    decltype(sa) sa2 = fun(sa);
    for (const auto &i: sa2)
    {
        cout << i << endl;
    }
}