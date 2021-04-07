#include<iostream>

using namespace std;

template<class T1, class T2>
class Test
{
	T1 a;
	T2 b;
	public:
		Test(T1 x, T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<"\n"<<b<<"\n";
		}
};
int main()
{
	Test<int , char>test1(12,'w');
	test1.show();
	Test<int,float>test2(13,12.756);
	test2.show();
	Test<int, int>test3(12,29);
	test3.show();
	return 0;
}
