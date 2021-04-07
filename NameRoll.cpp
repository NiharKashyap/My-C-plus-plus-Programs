#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int roll;
	char name[20];
	public:
	void getdata(){
		cout<<"Enter name of student\n";
		cin>>name;
		cout<<"Enter roll number of student\n";
		cin>>roll;
	}
	void disp(){
		cout<<"Name of student is "<<name<<" and roll number is "<<roll;
	}
};
int main()
{
	student t;
	t.getdata();
	t.disp();
	getch();
	return 0;
}
