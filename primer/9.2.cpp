#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
    list<deque<int>> test;
    deque<int> d = {1, 2, 3, 4, 5};
    // Point to the first item
    cout << *(d.begin()) << endl;
    // Point to the real last item
    cout << *(d.rbegin()) << endl;
}