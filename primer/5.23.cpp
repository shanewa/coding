#include <iostream>
using namespace std;

int main() 
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    try {
        if (b == 0)
        {
            throw runtime_error("The divider is 0.");
        }
        cout << a << " / " << b << " = " << a/b << endl;
    } 
    catch (runtime_error error) 
    {
        cout << "Pls input the divider again." << endl;
        cin >> b;
        cout << a << " / " << b << " = " << a/b << endl;
    }
    return 0;
}