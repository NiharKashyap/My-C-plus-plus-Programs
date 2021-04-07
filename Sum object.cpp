#include<iostream>
#include<conio.h>
using namespace std;
class DM
{
	public:
	float m,c;
		void getdata()
		{
			cout<<"Enter distance in Metre";
			cin>>m;
			cout<<"Enter distance in Centimetre";
			cin>>c;
		}
		void conversion(){
			m=m*3.2;
			c=c*0.3;
		}
};
class DB{
	public:
	float f,i;
		void getdata()
		{
			cout<<"Enter distance in Feet";
			cin>>f;
			cout<<"Enter distance in Inches";
			cin>>i;
		}
};
int main()
{
	float total1, total2;
	DM dm;
	DB db;
	dm.getdata();
	db.getdata();
	dm.conversion();
	total1=dm.m+db.f;
	total2=dm.c+db.i;
	cout<<total1<<"\n"<<total2;
	return 0;
}
