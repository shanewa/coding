#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string user;
    vector<int> users;
    
    while (getline(cin, user))
    {
        if (user == "99")
        {
            break;
        }
        users.push_back(stoi(user));
    }
    
    for (decltype(users.size()) i = 0; i < users.size() - 1; i++)
    {
        cout << users[i] + users[i+1] << endl;
    }
    
    return 0;
}