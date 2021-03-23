#include <iostream>
#include <string>
#include <vector>
using namespace std;

class date {
    public:
        date();
        date(const string&);
    private:
        unsigned year;
        unsigned month;
        unsigned day;

};

date::date()
{
    cout << "do nothing" << endl;
}

date::date(const string &date_str)
{
    // January 1, 1990
    string::size_type p2 = date_str.find_first_of(",");
    string::size_type p1 = date_str.find_first_of(" ");
    if (p1 != string::npos && p2 != string::npos) 
    {
        if (date_str.substr(0, p1) == "January")
        {
            year = 1;
        }
        month = stoi(date_str.substr(p1 + 1, p2 - p1 -1));
        day = stoi(date_str.substr(p2+2));
        cout << year << "-" << month << "-" << day << endl;
    }
    // 1/1/1990
    // Jan 1 1900
}

int main()
{
    date d1("January 1, 1990");
}