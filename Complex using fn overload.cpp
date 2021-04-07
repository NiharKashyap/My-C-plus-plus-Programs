#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int x;
	int y;
	public:
		void getdata(int a, int b)
		{
			x=a;
			y=b;
		}
		complex operator +(complex c);
		void disp();
};
complex complex:: operator +(complex c)
		{
			complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return(temp);
		}
void complex::disp()
		{
			cout<<x<<" + i"<<y;
		}
int main()
{
	complex c1,c2,c3;
	c1.getdata(1,2);
	c2.getdata(2,3);
	c3=c1+c2;
	c3.disp();
	getch();
	return 0;
}
