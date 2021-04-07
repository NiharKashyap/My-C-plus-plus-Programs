#include<iostream>
using namespace std;
class set{
	int m,n;
	public:
	void input();
	int largest();
	void display(); 
};
int set::largest()
{
	if(m>=n)
	{
		return(m);
	}
	else
	return(n);
}
void set::display()
{
	cout<<"Largets value = "<<largest()<<"\n";
}
void set::input()
{
	cout<<"Enter the value of m and n\n";
	cin>>m>>n;
}
int main()
{
	set a;
	a.input();
	a.display();
	return 0;
}
