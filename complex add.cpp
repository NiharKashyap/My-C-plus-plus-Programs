#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	float x;
	float y;
	public:
		void getnum()
		{
			cout<<"Enter real part of number";
			cin>>x;
			cout<<"Enter imaginary part of number";
			cin>>y;
		}
		void show(complex c)
		{
			cout<<c.x<<"+ i"<<c.y;
		}
		friend complex sum(complex,complex);
	};
	complex sum(complex c1, complex c2)
	{
		complex c3;
		c3.x= c1.x+c2.x;
		c3.y= c1.y+c2.y;
		return(c3);
	}
	int main()
	{
		complex a,b,c;
		a.getnum();
		b.getnum();
		c= sum(a,b);
		c.show(c);
		getch();
		return 0;
	}
