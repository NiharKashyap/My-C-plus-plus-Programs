#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class overload
{
	public:
		int a;
		int operator = (int l)
		{
			a = l;
			return a;
		}	
};
int main()
{
	int p;
	overload o;
	int x=5;
	p=o=8;
	//o.display();
	cout<<p;
	getch();
	return 0;
}
