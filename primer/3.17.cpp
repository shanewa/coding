#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string user_input;
    vector<string> user_string;
    
    while (cin >> user_input)
    {
        if (user_input == "q")
        {
            break;
        }
        user_string.push_back(user_input);
    }

    for (auto &i : user_string)
    {
        for (auto &j : i)
        {
            j = toupper(j);
        }
        cout << i << endl;
    }

    return 0;
}