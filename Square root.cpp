#include<iostream>
#include<math.h>
using namespace std;
class root{
	int x;
	public:
	void getdata();
	void sqroot();
};
void root::getdata(){
	cout<<"Enter number to find square root\n";
	cin>>x;
}
void root::sqroot(){
	float sq;
	sq=sqrt(x);
	cout<<"Square root is "<<sq;
}
int main()
{
	root a;
	a.getdata();
	a.sqroot();
	return 0;
}

