#include <iostream>
#include <string>
#include <forward_list> 
#include <list> 
#include <vector> 
using namespace std;

void remove_even_copy_odd(vector<int> & vi)
{
    for (const auto &i : vi)
    {
        cout << i << " ";
    }
    cout << endl;

    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2) 
        {
            iter = vi.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            iter = vi.erase(iter);
        }        
    }

    for (const auto &i : vi)
    {
        cout << i << " ";
    }
    cout << endl;
}

void remove_even_copy_odd(list<int> & li)
{
    for (const auto &i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    auto iter = li.begin();
    while (iter != li.end())
    {
        if (*iter % 2) 
        {
            iter = li.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            iter = li.erase(iter);
        }        
    }

    for (const auto &i : li)
    {
        cout << i << " ";
    }
    cout << endl;
}

void remove_even_copy_odd(forward_list<int> & fi)
{
    for (const auto &i : fi)
    {
        cout << i << " ";
    }
    cout << endl;

    auto iter = fi.begin();
    auto before = fi.before_begin();
    while (iter != fi.end())
    {
        if (*iter % 2) 
        {   
            iter = fi.erase_after(before);
        }
        else
        {
            iter = fi.insert_after(iter, *iter);
            before = iter;
            ++iter;
        }    
    }

    for (const auto &i : fi)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    remove_even_copy_odd(vi);

    list<int> li = {0,1,2,3,4,5,6,7,8,9};
    remove_even_copy_odd(li);

    forward_list<int> fi = {0,1,2,3,4,5,6,7,8,9};
    remove_even_copy_odd(fi);
}
