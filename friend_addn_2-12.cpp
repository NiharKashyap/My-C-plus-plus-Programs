#include<iostream>
#include<conio.h>
using namespace std;

class Y;
class X
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"Enter a and B: \n";
			cin>>a>>b;
		}
		friend void add(X,Y);
};
class Y
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"Enter a and B: \n";
			cin>>a>>b;
		}
		friend void add(X,Y); 
};
void add(X x, Y y)
{
	X temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	cout<<temp.a<<" and "<<temp.b;
}
int main()
{
	X p,q;
	Y r;
	p.getdata();
	r.getdata();
	add(p,r);
	getch();
	return 0;
}

