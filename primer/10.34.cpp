#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8};
    
    ostream_iterator<int> oi(cout, " ");
    copy(vec.rbegin(), vec.rend(), oi);
}