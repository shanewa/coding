#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    for (auto i = vec.end(); i != vec.begin(); --i) {
        cout << *(i - 1) << " " << endl;
    }
}