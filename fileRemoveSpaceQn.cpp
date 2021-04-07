#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream file1;
	ofstream file2;
	file1.open("src.txt");
	file2.open("trgt.txt");
	char ch;
	int count=0;
	while(file1)
	{
		ch = file1.get();
		while(ch==' ')
		{
			if(count==0)
			{
				file2.put(ch);
			}
			ch = file1.get();
			count++;
		}
		if(ch!=EOF)
		{
			file2.put(ch);
		}
		count = 0;
	}
	file1.close();
	file2.close();
	return 0;
	
}
