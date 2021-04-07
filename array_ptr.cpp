#include<iostream>

using namespace std;

int main()
{
	int s, a[s] ,i;
	int *ptr = a[s];
	cin>>s;
	cout<<"Enter "<<s<<" elements";
	for(i=0;i<s;i++)
	{
		cin>>ptr + i;
	}
	cout<<"\n"<<"The elements\n";
	for(i=0;i<s;i++)
	{
		cout<<*(ptr+i);
	}
	return 0;
}
