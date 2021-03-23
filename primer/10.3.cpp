#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int calc_container(const vector<int> &vec)
{
    return accumulate(vec.cbegin(), vec.cend(), 0);
}

double calc_container(const vector<double> &vec)
{
    return accumulate(vec.cbegin(), vec.cend(), 0.0);
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    cout << calc_container(vec) << endl;

    vector<double> vec_d = {1.1,2.2};
    cout << calc_container(vec_d) << endl;
}