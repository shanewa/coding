#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<char> yuanyin = {'a', 'e', 'i', 'o', 'u'};
    string user_input;
    unsigned cnt = 0;
    unsigned scnt = 0;
    getline(cin, user_input);
    auto beg = user_input.begin();
    while (beg != user_input.end())
    {
        if (isspace(*beg))
        {
            ++scnt;
        }
        switch (tolower(*beg))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++cnt;
        }
        ++beg;
    }
    
    cout << cnt << endl;
    cout << scnt << endl;
    return 0;
}