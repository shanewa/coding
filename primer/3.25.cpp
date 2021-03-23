#include <iostream>
#include <vector>
#include <string>
using namespace std;

void split(const string &s, vector<string> &tokens, const string &delimiters = " ")
{
    string::size_type lastPos = s.find_first_not_of(delimiters, 0);
    string::size_type pos = s.find_first_of(delimiters, lastPos);
    while (string::npos != pos || string::npos != lastPos)
    {
        tokens.push_back(s.substr(lastPos, pos - lastPos));
        lastPos = s.find_first_not_of(delimiters, pos);
        pos = s.find_first_of(delimiters, lastPos);
    }
}

int main()
{
    string input;
    vector<unsigned> stages(11, 0);
    vector<string> scores; 

    getline(cin, input);
    if (input.empty())
    {
        cout << "ERROR: user should have input sth!" << endl;
        return 1;
    }

    split(input, scores);
    for (auto i : scores)
    {
        (*(stages.begin() + stoi(i)/10))++;
    }

    for (auto j : stages)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}