#include<iostream>

using namespace std;

class complex
{
	public:
		int x,y;
		void getdata(int a, int b)
		{
			x=a;y=b;
		}
		friend complex operator + (complex,complex);
};
complex operator +(complex j,complex c)
{
	complex t;
	t.x = j.x + c.x;
	t.y = j.y + c.y;
	//cout<<t.x<<"+ i"<<t.y;
	return t; 
}
int main()
{
	complex p,q,r;
	p.getdata(2,4);
	q.getdata(1,6);
	r=p+q;
	cout<<r.x<<"+i"<<r.y;
	return 0;
}
