#include <iostream>
#include <string>
using namespace std;

void get_line()
{
    string line;
    while (getline(cin, line)) 
    {
        if (!line.empty()) 
        {
            cout << "User input an non-empty words" << line << endl;
            break;
        }
        else
        {
            cout << "User input none: " << line  << endl;
        }
    }
}

void get_word()
{
    string word;
    while(cin >> word)
    {
        cout << "->" << word << endl;
    } 
}

int main() 
{
    get_line();
    get_word();
    return 0;
}