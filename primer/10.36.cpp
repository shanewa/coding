#include<iostream> 
#include<vector> 
#include<list>
#include<algorithm>  
using namespace std;

int main(int argc, char**argv)  
{ 
	list<int> list1({1,0,3,0,4}); 
	cout<< *find(list1.rbegin(),list1.rend(),0); 
	return 0;  
}