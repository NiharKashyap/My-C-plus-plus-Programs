#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class DB;
class DM
{
	float m,c;
	public:
		void getdata(float a, float b)
		{
			m=a;
			c=b;
		}
		void conversion()
		{
			m=m*3.2;
			c=c*0.3;
		}
		friend void operator +(DM,DB);
};
class DB
{
	float f,i;
	public:
		void getdata(float a,float b)
		{
			f=a;
			i=b;
		}
		friend void operator +(DM,DB);
};
void operator +(DM d, DB e)
{
	float total1,total2;
	total1=d.m+e.f;
	total2=d.c+e.i;
	cout<<total1<<"\n";
	cout<<total2;
}
int main()
{
	DM dm;
	DB db;
	dm.getdata(2,3);
	db.getdata(5,6);
	dm.conversion();
	dm+db;
	getch();
	return 0;
}
