#include <iostream>
#include <list> 
using namespace std;

int main()
{
    list<int> l = {0, 1, 3};
    auto e1 = l.end();
    list<int>::iterator e2 = l.end();

    l.erase(e1, e2);

    for (const auto &i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}