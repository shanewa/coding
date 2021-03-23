#include <iostream>
#include <string>
using namespace std;

void replace_x(string str)
{
    for (auto &c : str)
    {
        c = 'X';
    }
    cout << str << endl;
}

void replace_x_char(string str)
{
    for (char &c : str)
    {
        c = 'X';
    }
    cout << str << endl;
}

void replace_x_while(string str)
{
    decltype(str.size()) num = 0;
    while (num < str.size())
    {
        str[num] = 'X';
    }
    cout << str << endl;
}

void read_and_remove_punctuation()
{
    string str;
    getline(cin, str);
    if (str.size() > 0) 
    {
        for (auto c : str)
        {
            if (!ispunct(c)) 
            {
                cout << c;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "user didn't input any words." << endl;
    }
}

int main()
{
    string str("this is shane");
    // replace_x_char(str);
    // replace_x_while(str);
    read_and_remove_punctuation();
    return 0;
}