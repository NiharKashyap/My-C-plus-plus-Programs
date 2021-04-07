#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
//Bank
class bank
{
	public:
		char name[20];
		int code;
		void getmem()
		{
			cout<<"Enter bank name: ";
			cin>>name;
			cout<<"\nEnter code: ";
			cin>>code;
		}
};
class employee: public bank
{
	public:
		int E_id,salary;
		char ename[20];
		void getdetails()
		{
			cout<<"\nEnter employee id: ";
			cin>>E_id;
			cout<<"\nEnter employee Name: ";
			cin>>ename;
			cout<<"\nSalary drawn: ";
			cin>>salary;
		}
};
class manager: public employee
{
	public:
	int performance;
	void getper()
	{
		cout<<"\nEnter performance rating between 1 to 10: ";
		cin>>performance;
		disp();
	}
	void disp()
	{
		cout<<"Bank name: "<<name;
		cout<<"\nBank code: "<<code;
		cout<<"\nEmloyee name: "<<ename;
		cout<<"\nEmployee ID: "<<E_id;
		cout<<"\nSalary: "<<salary;
		cout<<"\nPerformance in office: "<<performance;
	}
};
class clerk: public employee
{
	public:
	int incentives;
	void getinc()
	{
		cout<<"\nEnter incentives offered in Rupees: ";
		cin>>incentives;
		disp();
	}
	void disp()
	{
		cout<<"Bank name: "<<name;
		cout<<"Bank code: "<<code;
		cout<<"\nEmloyee name: "<<ename;
		cout<<"\nEmployee ID: "<<E_id;
		cout<<"\nSalary: "<<salary;
		cout<<"\nIncentive offered: "<<incentives;
	}
	
};
class PO: public employee
{
	public:
	int hr;
	void workhr()
	{
		cout<<"Enter hours of work in a week: ";
		cin>>hr;
		disp();
	}
	void disp()
	{
		cout<<"Bank name: "<<name;
		cout<<"Bank code: "<<code;
		cout<<"\nEmloyee name: "<<ename;
		cout<<"\nEmployee ID: "<<E_id;
		cout<<"\nSalary: "<<salary;
		cout<<"\nHours of Work per week: "<<hr;
	}
};
int main()
{
	int x;
	cout<<"1) Manager\n2) Clerk\n3) PO";
	cout<<"\nEnter choice: ";
	cin>>x;
	if(x==1)
	{
		manager m;
		m.getmem();
		m.getdetails();
		m.getper();
	}
	else if (x==2)
	{
		clerk c;
		c.getmem();
		c.getdetails();
		c.getinc();
	}
	else if(x==3)
	{
		PO o;
		o.getmem();
		o.getdetails();
		o.workhr();
	}
	else
	{
	cout<<"Invalid choice";
	}
	getch();
	return 0;	
}
