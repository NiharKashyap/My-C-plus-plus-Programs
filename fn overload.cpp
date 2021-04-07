#include<iostream>
using namespace std;
class add
{
	int sumi;
	float sumf;
	public:
		void sum(int a, int b)
		{
			cout<<"Given numbers are type integer";
		}
		void sum(float x, float y)
		{
			cout<<"Given numbers are type float";
		}
		
};
int main()
{
	add A;
	A.sum(3.5f,6.7f);
	A.sum(4,5);
	return 0;
}
