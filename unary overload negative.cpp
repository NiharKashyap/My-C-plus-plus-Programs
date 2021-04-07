#include<iostream>
#include<conio.h>
using namespace std;
class change
{
	public:
		int operator -(int n)
		{
			n=-n;
			return n;
		}
};
int main()
{
	int x,y;
	change t;
	cout<<"Enter number: ";
	cin>>x;
	y=t-x;
	cout<<"\n"<<y;
	getch();
	return 0; 
}
