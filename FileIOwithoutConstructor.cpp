#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifs;
	ifs.open("file.txt");
	char name[30];
	int roll;
	ifs>>name;
	ifs>>roll;
	cout<<name;
	cout<<"\n"<<roll;
	return 0;
}
