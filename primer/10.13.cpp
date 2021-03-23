#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool is_longer_than(const string &s)
{
    return s.length() >= 5 ? true : false; 
}

vector<string>::iterator is_length_longer_than_5(vector<string> &vec)
{
    return partition(vec.begin(), vec.end(), is_longer_than);
}

int main()
{
    vector<string> vec = {"1234567", "1234","123", "12345", "123456"};
    vector<string>::iterator e = is_length_longer_than_5(vec);
    vector<string>::iterator b = vec.begin();
    while (b != e)
    {
        cout << *b++ << " ";
    }
    cout << endl;
}