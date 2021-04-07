#include<iostream>
using namespace std;
class item{
	int number,a;
	float cost,b;
	public:
	void getdata();
	void putdata(void);
};
void item::getdata()
{
	cout<<"Enter values of number and cost\n";
	cin>>a>>b;
	number=a;
	cost=b;
}
void item::putdata()
{
		cout<<"number "<<number<<"\n";
		cout<<"cost "<<cost;
}
int main()
{
	item x;
	x.getdata();
	x.putdata();
	return 0;
}
