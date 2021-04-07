#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
		string name[20],designation[20];
		int salary[10],i;
		void getdetails()
		{
			cout<<"Enter 10 employee names: \n";
			for(i=0;i<10;i++)
			{
				cin>>name[i];
			}
			cout<<"Enter designation: \n";
			for(i=0;i<10;i++)
			{
				cin>>designation[i];
			}
			cout<<"Emter salary: \n";
			for(i=0;i<10;i++)
			{
				cin>>salary[i];
			}
			
		}
		void putdetails()
		{
			for(i=0;i<10;i++)
			{
				cout<<"Name: "<<name[i];
				cout<<"\nDesignation: "<<designation[i];
				cout<<"\nSalary: "<<salary[i];
				cout<<"\n\n";
			}
		}
};
int main()
{
	employee e;
	e.getdetails();
	e.putdetails();
	return 0;
}
