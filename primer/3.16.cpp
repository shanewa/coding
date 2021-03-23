#include <iostream>
#include <vector>
using namespace std;

// void print_vector(decltype(vct) &vct)
// {
//     unsigned n = 0;
//     cout << endl << "size = " << vct.size() << endl;
//     for (auto i : vct)
//     {
//         cout << ++n << ": " << i << endl;
//     }
// }

int main()
{
    // Define
    // vector<int> vct;
    // vector<int> vct(10);
    vector<int> vct(10, 42);

    // Show
    unsigned n = 0;
    cout << endl << "size = " << vct.size() << endl;
    for (auto i : vct)
    {
        cout << ++n << ": " << i << endl;
    }

    return 0;
}