#include<iostream>

using namespace std;
template<class T1,class T2>
class Test
{
	T1 a;
	T2 b;
	public:
		Test(T1 x, T2 y)
		{
			a = x;
			b = y;
		}
		void show()
		{
			cout<<"\n"<<a<<"\n"<<b;
		}	
};
int main()
{
	Test<int,int>test3(20,25);
	test3.show(); 
	Test<float,int> test1(1.23,123);
	test1.show();
	Test<int,char> test2(12,'w');
	test2.show();
	return 0;
}
