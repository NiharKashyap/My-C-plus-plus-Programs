#include<iostream>
using namespace std;
class time
{
	public:
		int hr, min;
		void gettime()
		{
			cout<<"Enter time in hr: ";
			cin>>hr;
			cout<<"\nEnter time in minutes: \n";
			cin>>min;
		}
		time sum(time t)
		{
			time temp;
			temp.hr = hr + t.hr;
			temp.min = min + t.min;
			return temp; 
		}
};
int main()
{
	time a,b,c;
	a.gettime();
	b.gettime();
	c=a.sum(b);
	cout<<c.hr<<" : "<<c.min;
	return 0;
}
