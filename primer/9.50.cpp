#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec = {"1", "2", "3"};
    int sum = 0;
    for (const auto &i : vec)
    {
        sum += stoi(i);
    }
    cout << sum << endl;
}