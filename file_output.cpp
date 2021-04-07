#include<fstream>
#include<iostream>

using namespace std;
int main()
{
	ifstream fil1;
	fil1.open("c.txt");
	int number;
	float floating;
	char name[30];
	fil1>>name;
	fil1>>number;
	fil1>>floating;
	cout<<name<<"\n"<<number<<"\n"<<floating;
	fil1.close();
	return 0;
}
