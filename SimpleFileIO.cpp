#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream outf("file");
	cout<<"Enter name: ";
	char name[30];
	cin>>name;
	outf<<name<<"\n";
	cout<<"Enter Roll";
	int roll;
	cin>>roll;
	outf<<roll;
	outf.close();
	ifstream inf("file");
	inf>>name;
	inf>>roll;
	cout<<name;
	cout<<"\n"<<roll;
	inf.close();
	return 0;
}
