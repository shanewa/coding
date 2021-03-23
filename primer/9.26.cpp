#include <iostream>
#include <list> 
#include <forward_list> 
#include <vector> 
using namespace std;

void remove_odd(int (&ia)[10])
{
    list<int> l;
    for (const auto &i : ia)
    {
        l.emplace_back(i);
    }
    // This is the wrong because the iterators will be invalid after erase.
    // for (auto i=l.begin(); i != l.end(); ++i)
    // {  
    //     if (*i % 2)
    //     {
    //         l.erase(i);
    //     }
    // }
    auto i = l.begin();
    while (i != l.end())
    {
        if (*i % 2)
        {
            i = l.erase(i);
        }
        else
        {
            ++i;
        }
        
    }
    for (const auto &i: l)
    {
        cout << i << " ";
    }
    cout << endl;
}

void remove_even(int (&ia)[10])
{
    vector<int> v;
    for (const auto &i : ia)
    {
        v.emplace_back(i);
    }
    auto i = v.begin();
    while (i != v.end())
    {
        if (!(*i % 2))
        {
            i = v.erase(i);
        }
        else
        {
            ++i;
        }
        
    }
    for (const auto &i: v)
    {
        cout << i << " ";
    }
    cout << endl;
}

void remove_even_by_f_list(int (&ia)[10])
{
    forward_list<int> f;
    auto fb = f.before_begin();
    for (const auto &i : ia)
    {
        fb = f.insert_after(fb, i);

    }

    auto i = f.before_begin();
    auto b = f.begin();
    auto e = f.end();
    while (b != e)
    {
        if (!(*b % 2))
        {
            b = f.erase_after(i);
        }
        else
        {
            i = b;
            ++b;
        }
    }
    for (const auto &i: f)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    remove_odd(ia);
    remove_even(ia);
    remove_even_by_f_list(ia);
}