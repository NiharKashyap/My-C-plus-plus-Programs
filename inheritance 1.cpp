#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class student
{
	public:
		int roll;
		void getroll()
		{
			cout<<"Enter roll no";
			cin>>roll;
		}
};
class sports: public student
{
	public:
		int score;
		void getscore()
		{
			cout<<"Enter score of "<<roll; 
			cin>>score;
		}
};
class test
{
	public:
		int marks;
		void getmarks()
		{
			cout<<"Enter marks";
			cin>>marks;
		}
};
class total:public test,public sports
{
	public:
		int total;
		void gettotal()
		{
			getroll();
			getscore();
			getmarks();
			total=marks+score;
			cout<<"Total for roll no "<<roll;
			cout<<" is "<<total;
		}
};
int main()
{
	
	total o;
	o.gettotal();
	getch();
	return 0;
}
