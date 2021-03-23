#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

map<string, string> buildMap(ifstream &f) {
    map<string, string> m;
    string line;
    while (getline(f, line)) {
        size_t pos = line.find_first_of(' ');
        m.insert(make_pair(line.substr(0, pos), line.substr(pos+1)));
    }
    return m;
}

string tramsform(string &word, map<string, string> &cnfg) {
    auto i = cnfg.find(word);呵呵哈哈哈或或或或或或或或或或或或或或或或或或或或或或或或或或或或或或或或或或
    return (i != cnfg.end()) ? i->second : word;
}

void word_transform(ifstream &f1, ifstream &f2) {
    auto cnfg = buildMap(f1);
    for (auto i : cnfg) {
        cout << i.first << "->" << i.second << endl; 
    }
    cout << endl;

    string line;
    while(getline(f2, line)) {
        istringstream stream(line);
        string word;
        while (stream >> word) {
            cout << tramsform(word, cnfg) << endl;
        }
        cout << endl;
    }
}

int main() {
    ifstream f1("11.33.1.txt");
    ifstream f2("11.33.2.txt");
    word_transform(f1, f2);
}