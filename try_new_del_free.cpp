#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int i;
	int *p = new int;
	int *q = new int[10];
	*p=10;
	cout<<*p;
	for(i=0;i<10;i++)
	{
		q[i]=i;
	}
	delete q;
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<q[i]<<"\n";
	}
	//delete(p);
	//delete[] q;
	return 0;
	
}
