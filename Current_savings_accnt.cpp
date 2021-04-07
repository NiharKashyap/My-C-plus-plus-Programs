#include<stdlib.h>
#include<iostream>
#include<cstring>
using namespace std;

class account
{
	public:
		 char name[20];
		 string acc_type;
		 int accountno;
		 float balance;
		
		void getdetails()
		{

			cout<<"Name:"; cin>>name;
			cout<<"\nAccount Number: "; cin>>accountno;
			//cout<<"\nAccount type: "; cin>>acc_type;
			cout<<"\nBalance: "; cin>>balance;
		}
		void deposit()
		{
			int d;
			cout<<"\nEnter amount :"; cin>>d;
			balance = balance +d;
			cout<<"\nNew balance: "<<balance;
		}
		void withdraw()
		{
			int w;
			cout<<"Enter withdraw amount: ";
			cin>>w;
			if(w>balance)
			{
				cout<<"Error ";
			}
			else
			balance = balance - w;
			cout<<"\nNew balance: "<<balance;
		}
		
};
class current_account: public account
{
	public:
	void interest()
		{
			int amt,time;
			float si;
			cout<<"\nAmount? "; cin>>amt;
			cout<<"\nTime period? "; cin>>time;
			si = amt * time/12 * 0.05;
			cout<<"Amount due: "<<balance+si;
		}
		void disp()
		{
			cout<<"Name: "<<name<<"\nBalance: "<<balance<<"\nType: "<<acc_type<<"\nAccount num: "<<accountno;
		}
};
class savings_account: public account
{
	public:
		void interest()
		{
			int amt,time;
			float si;
			cout<<"\nAmount? "; cin>>amt;
			cout<<"\nTime period? "; cin>>time;
			si = amt * time/12 * 0.05;
			cout<<"Amount due: "<<balance+si;
		}
		void disp()
		{
			cout<<"Name: "<<name<<"\nBalance: "<<balance<<"\nType: "<<acc_type<<"\nAccount num: "<<accountno;
		}
};
int main()
{
	savings_account s;
	current_account c;
	int choice,x;
	string type;
	cout<<"Select type of account: Savings/Current";
	cin>>type;	
	do
	{
		cout<<"\nEnter Choice\n\n";
		cout<<"1)Enter details\n2)Deposit\n3)Withdraw\n4)Calculate Interest\n5)Display details\n6)exit\n";
		cin>>choice;
		if(type=="current")
		{
			c.acc_type = type;
		switch(choice)
		{
		case(1): c.getdetails();break;
		case(2): c.deposit();break;
		case(3): c.withdraw();break;
		case(4): c.interest();break;
		case(5): c.disp();break;
		case(6): exit(0);
		}
		}
		else
		{
			s.acc_type = type;
		switch(choice)
		{
		case(1): s.getdetails();break;
		case(2): s.deposit();break;
		case(3): s.withdraw();break;
		case(4): s.interest();break;
		case(5): s.disp();break;
		case(6): exit(0);
		}
		}
		
	}
	while(1);
	return 0;
}
