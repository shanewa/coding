#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elim_dumps(vector<int> &vec)
{
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

bool is_shorter(const int &i1, const int &i2)
{
    return i1 <= i2 ? true : false;
}

int main()
{
    vector<int> vec = {2,2,2,1,5,4,3};

    stable_sort(vec.begin(), vec.end(), is_shorter);
    elim_dumps(vec);

    for (const auto &i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}