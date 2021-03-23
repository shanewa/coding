#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    string user_str;
    unsigned cnt = 1;
    string max_str;
    string last_str;
    unsigned max_cnt = 1;
    vector<string> user_list;
    while (cin >> user_str)
    {
        if (user_str == "over")
        {
            break;
        }
        user_list.push_back(user_str);
    }

    for (auto beg = user_list.begin(); beg != user_list.end(); ++beg)
    {
        if (last_str == *beg)
        {
            ++cnt;
        } 
        if (last_str != *beg || beg == user_list.end() - 1)
        {
            if (cnt > max_cnt)
            {
                max_cnt = cnt;
                max_str = last_str;
            }    
            last_str = *beg;        
            cnt = 1;
        }      
    }
    cout << max_str << " : " << max_cnt << endl;
    return 0;
}