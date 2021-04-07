#include<iostream>
using namespace std;

int main()
{
	int i;
	int A[][3] = {{1,2,3},{5,6,7}};
	for(i=0;i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			cout<<A[i][j];
			cout<<"*\n";
		}
		cout<<A[0][2] * A[1][2];
		cout<<"*\n";
	}
	return 0;
}
