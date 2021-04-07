#include<iostream>
using namespace std;
template<class T>
T comp(T a, T b)
{
	if(a>b)
	return a;
	else
	return b;
};
int main()
{
	cout<<comp('a','b');
	return 0;
}
