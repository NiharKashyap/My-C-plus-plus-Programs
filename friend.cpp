#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
	int a=5;
	friend void add(A,B);
};
class B
{
	int b=5;
	friend void add(A,B); 
};
void add(A p, B q)
{
	cout<<p.a+q.b;
}
int main()
{
	A x;
	B y;
	add(x,y);
}
