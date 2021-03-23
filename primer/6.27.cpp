#include <iostream>
using namespace std;

int calc_list(initializer_list<int> input)
{
    int sum = 0;
    for (const auto &i : input)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << calc_list({1, 2, 3}) << endl;
    cout << calc_list({1, 2, 3, 4, 5}) << endl;
    return 0;
}