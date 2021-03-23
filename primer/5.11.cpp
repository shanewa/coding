#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int a = 1, b = 2;
    int c = 2;

    switch (c)
    {
        case a:
        case b:
            ;
    }
        
    return 0;
}