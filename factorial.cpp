#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
	int i,f=1,x;
	public:
		int fact()
		{
			cout<<"Enter number to calculate factorial\n";
			cin>>x;
			for(i=1;i<=x;i++)
			{
				f=f*i;
			}
			return(f);
		}
		void disp()
		{
			cout<<"Factorial is "<<fact();
		}
};
int main()
{
	factorial y;
	y.disp();
	getch;
	return 0;
}
