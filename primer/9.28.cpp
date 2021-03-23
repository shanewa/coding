#include <iostream>
#include <string>
#include <forward_list> 
using namespace std;

void handle_string_by_f_list(forward_list<string> &fl, const string &str1, const string &str2)
{
    auto b = fl.begin();
    auto e = fl.end();
    while (b != e)
    {
        if (*b == str1)
        {
            b = fl.insert_after(b, str2);
        }
        else
        {
            ++b;
        }        
    }
    for (const auto i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    forward_list<string> fl = {"1", "2", "3", "4"};
    handle_string_by_f_list(fl, "2", "2-1");
}