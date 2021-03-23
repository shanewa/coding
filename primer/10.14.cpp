#include <iostream>
using namespace std;

// 10.14
auto calc_int = [] (const int &v1, const int &v2) -> int
{
    return v1 + v2;
};

// 10.15
int calc_int_2(const int &v1, const int &v3)
{
    auto calc_int3 = [v1] (const int &v2) -> int {return v1 + v2;};
    return calc_int3(v3);
}

int main()
{
    int v1 = 1, v2 = 2;
    cout << calc_int(v1, v2) << endl;
    cout << calc_int_2(v1, v2) << endl;
}