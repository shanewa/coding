#include "classic.h"

// Return the first occur index of a char in a string.
// Save the occur times into the reference.
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
            {
                ret = i;
            }
            ++occurs;
        }
    }
    return ret;
}

// Check if a string is a sentense.
// THe last char of the string must be a single full stop.
bool is_sentence(const string &s)
{
    string::size_type ctr = 0;
    return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;

}

bool has_upper(const string &s)
{
    for (string::size_type i = 0; i != s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            return true;
        }
    }
    return false;
}

void string_to_lower(string &s)
{
    for (string::size_type i = 0; i != s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
}

// Find the fist pos of a charactor that is not the input char.
// Different from string::find_first_not_of, it's more efficint when input is a signal char.
size_t string_find_first_not_char(const string &s, const char &c, const size_t pos)
{
    for (size_t i = pos; i < s.size(); ++i) {
        if (s[i] != c)
        {
            return i;
        }
    }
    return string::npos;
}

size_t string_find_first_is_char(const string &s, const char &c, const size_t pos)
{
    for (size_t i = pos; i < s.size(); ++i) {
        if (s[i] == c)
        {
            return i;
        }
    }
    return string::npos;
}

// Find the first occurrence of sub-string NOT in the specified string being called upon.
size_t string_find_first_not_str(const string &s, const string &sub, const size_t pos)
{
    for (size_t i = pos; i < s.size() - sub.size(); ++i) {
        if (s.substr(i, sub.size()) != sub)
        {
            return i;
        }
    }
    return string::npos;
}

// Split a string with a singal delimiter.
// It's not efficient to use find_first_not_of if the delimiter is a char.
// So redefine a new func string_find_first_not_char to replace find_first_not_of.
void split(const string& s, vector<string>& tokens, const char &delimiter = ' ') 
{
    tokens.clear();
    size_t last_pos = string_find_first_not_char(s, delimiter, 0);
    size_t pos = s.find(delimiter, last_pos);
    while (last_pos != string::npos) 
    {
        tokens.emplace_back(s.substr(last_pos, pos - last_pos));
        last_pos = string_find_first_not_char(s, delimiter, pos);
        pos = s.find(delimiter, last_pos);
    }
}

// Split a string with multiple delimiters.
void split(const string &s, vector<string> &tokens, const string &delimiter = " ") 
{
    tokens.clear();
    size_t last_pos = s.find_first_not_of(delimiter, 0);
    size_t pos = s.find_first_of(delimiter, last_pos);
    while (last_pos != string::npos) 
    {
        tokens.emplace_back(s.substr(last_pos, pos - last_pos));
        last_pos = s.find_first_not_of(delimiter, pos);
        pos = s.find_first_of(delimiter, last_pos);
    }
}

// Split a string with a string.
void split_by_str(const string &s, vector<string> &tokens, const string &delimiter = " ")
{
    tokens.clear();
    size_t last_pos = string_find_first_not_str(s, delimiter, 0);
    size_t pos = s.find(delimiter, last_pos);
    while (last_pos != string::npos)
    {
        tokens.emplace_back(s.substr(last_pos, pos - last_pos));
        last_pos = string_find_first_not_str(s, delimiter, pos + delimiter.size());
        pos = s.find(delimiter, last_pos);
        if (pos == string::npos)
        {
            pos = s.size();
        }
    }
}

// Select the shorter string and return its reference.
// No any copy in this function.
const string &shorter_string(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

// Returnt the position of the first num of a sting
string::size_type find_first_num_of(const string &s1)
{
    return s1.find_first_of("0123456789");
}

// Extract all numbers in a string
void extract_all_num_of(const string &s, string &n)
{
    string::size_type pos = 0;
    while ((pos = s.find_first_of("0123456789", pos)) != string::npos)
    {
        n.append(s, pos++, 1);
    }
}

// Print the Vector object
void print1(vector<string> const &vec)
{
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << endl;
    }
}

// Print the Vector object with lambda
void print2(vector<string> const &vec)
{
    for_each(vec.cbegin(), vec.cend(), [] (const string &s) {cout << s << endl;});
}

// Caculte the absolute value
void absolute_value(vector<int> &vec)
{
    transform(vec.begin(), vec.end(), vec.begin(), [] (const int i) {return i < 0 ? -i : i;});
}

// Count the string longer than xx
int string_longer_than(const vector<string> &vec, const unsigned &i)
{
    return count_if(vec.cbegin(), vec.cend(), [&i] (const string &s) -> bool {return s.length() > i ? true : false;});
}

// Main function
int main()
{
    cout << "**** Begin ***" << endl;
    
    string teststr = "shane IS a good persoon ...";

    // string::size_type occurs = 0;
    // cout << find_char(teststr, 'o', occurs) << " : " << occurs << endl;

    // has_upper
    // string_to_lower(teststr);
    // cout << teststr << endl;

    // cout << string_find_first_not_char(teststr, 's', 0) << endl;    
    // cout << string_find_first_not_char(teststr, 'o', 0) << endl;    
    // cout << string_find_first_is_char(teststr, 's', 0) << endl;    
    // cout << string_find_first_is_char(teststr, 'o', 0) << endl;    
    // cout << string_find_first_not_str(teststr, "oo", 0) << endl;    
    // cout << string_find_first_not_str(teststr, "sh", 0) << endl;
    // cout << teststr.find("oo", 0) << endl;

    vector<string> tokens;
    split_by_str(teststr, tokens, "oo");
    // print1(tokens);
    // print2(tokens);
    cout << string_longer_than(tokens, 3) << endl;
    
    cout << "**** End ****" << endl;

    return 0;
}