#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void read_file()
{
    string f = "8.1.cpp";
    string line;
    vector<string> vec;
    ifstream in(f);
    while (getline(in, line)) 
    {
        vec.push_back(line);
    }
}

vector<string> ReadDataFromFileWBW() { 
    ifstream fin("Input.txt");
    string strWord(""); 
    vector<string> v; 
    while( fin >> strWord ) 
    { 
        if (strWord.compare(strWord.length()-1, 1, ".") == 0)
        { 
            strWord.erase(strWord.length()-1, 1);
            v.push_back(strWord); 
            return v; 
        }
        v.push_back(strWord); 
    } 
}

void read_file_as_word()
{
    string f = "8.1.cpp";
    string word;
    vector<string> vec;
    ifstream in(f);
    while (in >> word) 
    {
        vec.push_back(word);
    }
    for (auto i : vec)
    {
        cout << i << endl;
    }
}

int main() {
    read_file();
    read_file_as_word();
}