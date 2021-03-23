#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int> &v, decltype(v.begin()) beg)
{
    if (beg != v.end())
    {
        cout << *beg << endl;
        print_vector(v, ++beg);        
    }   
}

int main()
{
    vector<int> test = {1,2,3,4,5,6,7,8,9};
    print_vector(test, test.begin());
}