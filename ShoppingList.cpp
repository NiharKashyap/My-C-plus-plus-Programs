#include<iostream>
#include<conio.h>
using namespace std;
class list
{
	int total=0,i=0,d,n,itemCode[100];
	float itemPrice[100];
	public:
		void add()
		{
			cout<<"Enter item code: ";
			cin>>itemCode[i];
			cout<<"Enter Price: ";
			cin>>itemPrice[i];
			i++;
		}
		void del()
		{
			cout<<"Enter code of item to delete: ";
			cin>>d;
			for(n=0;n<i;n++)
			{
				if(itemCode[n]==d)
				{
					itemCode[n]=0;
					itemPrice[n]=0;
					break;
				}
				else
				{
					cout<<"Item not present in list";
				}
			}
		}
		void sum()
		{
			for(n=0;n<i;n++)
			{
				total=total+itemPrice[n];
			}
			cout<<"Total Price is : "<<total;
		}
		void disp()
		{
			cout<<"Code  Price\n";
			for(n=0;n<i;n++)
			{
				cout<<itemCode[n]<<"     "<<itemPrice[n]<<"\n";
			}
		}
		
};
int main()
{
	list a;
	int choice,x;
	do
	{
		system("cls");
		cout<<"1. Add item\n2. Delete item\n3. Display Total price\n4. Display List\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:a.add();
			break;
			case 2:a.del();
			break;
			case 3:a.sum();
			break;
			case 4:a.disp();
			break;
			default: cout<<"Invalid choice";
			break;
		}
		cout<<"\n\nPress 0 to continue and any other key to exit\n";
		cin>>x;
	}
	while(x==0);
	getch;
	return 0;
}
