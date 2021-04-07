#include<iostream>

using namespace std;
class measure;
class length
{
	public:
		float feet,inch,result1,result2;
		void getdata()
		{
			cout<<"Enter distance in feet and inch";
			cin>>feet>>inch;
			convert();
		}
		void convert()
		{
			feet = feet*0.3048;
			inch = inch*0.0254;
		}
		
		friend void add(length,measure);
	
};
class measure
{
	public:
		float metre;
		void getdata()
		{
			cout<<"Enter data in metre: ";
			cin>>metre;
		}
		friend void add(length,measure);
};
void add(length l, measure m)
{
	l.result1 = l.feet + m.metre;
	l.result2 = l.inch + m.metre;
	cout<<"The result is"<<l.result1/100<<" and "<<l.result2/100;
}
int main()
{
	length len;
	measure ms;
	len.getdata();
	ms.getdata();
	add(len,ms);
}
