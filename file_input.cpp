#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ofstream file1;
	file1.open("src.txt");
	char ch[30];
	int t;
	cout<<"Enter no: ";
	cin>>t;
	cout<<"Enter text: ";
	cin>>ch;
	file1<<ch;
	file1<<"\n";
	file1<<t;
	file1.close();
	return 0;
}
