#include <iostream>
#include <string>
using namespace std;

void test_string(string &s, const string &oldVal, const string &newVal)
{
    string::size_type pos = 0;
    while (pos < s.length())
    {
        pos = s.find(oldVal, pos);
        if (pos == string::npos)
        {
            cout << "Finish the scan." << endl;
            break;
        }
        else
        {
            s.erase(pos, oldVal.length());
            s.insert(pos, newVal);
            pos += newVal.length();
        }        
    }  
}

int main()
{
    string str1 = "tho thru asap thru ...";
    test_string(str1, "thru", "through");
    cout << "result: " << str1 << endl;
}