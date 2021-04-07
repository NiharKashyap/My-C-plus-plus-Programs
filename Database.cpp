#include<iostream>
using namespace std;
//Staff
class staff
{
	public:
		char name[20];
		int code;
		void getmem()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter code: ";
			cin>>code;
		}
};
//Teacher
class teacher: public staff
{
	public:
		char subject[10];
		void getsub()
		{
			cout<<"Enter subject for teacher: ";
			cin>>subject;
			cout<<"Subject for "<<name<<" is "<<subject;
		}
};
//Typist
class typist: public staff
{
	public:
		int speed;
		void getspeed()
		{
			cout<<"Enter speed for typist: ";
			cin>>speed;
		}
};
//Officer
class officer: public staff
{
	public:
		int grade;
		void getgrade()
		{
			cout<<"Enter grade of officer\n";
			cin>>grade;
		}
		void display()
		{
				cout<<"Name: "<<name;
				cout<<"\nCode: "<<code;
				cout<<"\nGrade: "<<grade;
		}
};
//Regular
class regular: public typist
{
	public:
	void display()
		{
			cout<<"Name: "<<name;
			cout<<"\nCode: "<<code;
			cout<<"\nSpeed: "<<speed;
		}
};
//Casual
class casual: public typist
{
	public:
		int wage;
		void getwage()
		{
			cout<<"Enter wage for casual typist\n";
			cin>>wage;
		}
		void display()
		{
			cout<<"Name: "<<name;
			cout<<"\nCode: "<<code;
			cout<<"\nSpeed: "<<speed;
			cout<<"\nWage: "<<wage;
		}
};
int main()
{
	int x;
	cout<<"Enter type of employee: \n";
	cout<<"1) Teacher\n";
	cout<<"2) Regular Typist\n";
	cout<<"3) Casual Typist\n";
	cout<<"4) Officer\n";
	cin>>x;
	if(x==1)
	{
		teacher t;
		t.getmem();
		t.getsub();
	}
	else if(x==2)
	{
		regular r;
		r.getmem();
		r.getspeed();
		r.display();
		
	}
	else if(x==3)
	{
		casual c;
		c.getmem();
		c.getspeed();
		c.getwage();
		c.display();
	}
	else if(x==4)
	{
		officer o;
		o.getmem();
		o.getgrade();
		o.display();
		
	}
	else
	cout<<"Invalid choice";
	return 0;
}
