#include <iostream>
#include <string>
using namespace std;

void find_char(const string &s)
{
    string numbers = "0123456789";
    string::size_type pos = 0;
    while ((pos = s.find_first_of(numbers, pos)) != string::npos)
    {
        cout << s[pos];
        ++pos;
    }
    cout << endl;
    pos = 0;
    while ((pos = s.find_first_not_of(numbers, pos)) != string::npos)
    {
        cout << s[pos];
        ++pos;
    }
    cout << endl;
}

void find_longest_str_not_of(const string &s, const string &exclude_str)
{
    string::size_type pos1 = 0, pos2 = 0, maxpos1 = 0, maxpos2 = 0;
    while ((pos1 = s.find_first_not_of(exclude_str, pos1)) != string::npos)
    {
        pos2 = s.find_first_of(exclude_str, pos1);
        if (pos2 == string::npos)
        {
            pos2 = s.length();
        }
        if (maxpos2 - maxpos1 < pos2 - pos1)
        {
            maxpos1 = pos1;
            maxpos2 = pos2;
        }
        pos1 = pos2;
    }
    cout << s.substr(maxpos1, maxpos2 - maxpos1) << endl;
}

int main()
{
    // find_char("im 1s2h3a4n5e");
    find_longest_str_not_of("im 1s2h3a4bcvcvbn5e", "12345");
}