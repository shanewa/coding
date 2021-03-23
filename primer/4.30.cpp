#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = -1;
    int long long y = 0;
    // cout << sizeof x + y << endl;
    // cout << sizeof (x + y) << endl;
    // cout << sizeof x << endl;
    int n = sizeof x < y;
    cout << n << endl;

    // string z = "123";
    // cout << sizeof z->empty() << endl;

    return 0;
}