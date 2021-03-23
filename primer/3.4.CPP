#include <iostream>
#include <string>
using namespace std;

void compare_str()
{
    string str1;
    string str2;

    cout << "Pls input str1:" << endl;
    cin >> str1;
    cout << "Pls input str2:" << endl;
    cin >> str2;

    if (str1 > str2) 
    {
        cout << "The big is " << str1 << endl;
    }
    else
    {
        cout << "The big is " << str2 << endl;
    }
}

void compare_str_len()
{
    string str1;
    string str2;

    cout << "Pls input str1:" << endl;
    cin >> str1;
    cout << "Pls input str2:" << endl;
    cin >> str2;

    if (str1.length() > str2.length()) 
    {
        cout << "The longer is " << str1 << endl;
    }
    else
    {
        cout << "The longer is " << str2 << endl;
    }
}

int main() 
{
    // compare_str();
    compare_str_len();
    return 0;
}