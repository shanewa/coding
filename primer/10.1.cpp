#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

unsigned count_container(const vector<int> &vec, const int &val)
{
    return count(vec.begin(), vec.end(), val);
}

unsigned count_container(const list<string> &vec, const string &val)
{
    return count(vec.begin(), vec.end(), val);
}

int main()
{
    vector<int> vec = {1, 2, 3, 2, 4, 2};
    int val=2;
    cout << count_container(vec, val) << endl;

    list<string> str_list = {"1", "2", "1"};
    string str="1";
    cout << count_container(str_list, str) << endl;
}