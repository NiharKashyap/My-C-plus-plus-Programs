#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    int count=0;
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("src.txt");
    out_stream.open("trgt.txt");
     while(in_stream)
  {
    ch=in_stream.get();
    while(ch==' ')
    {
       if(count==0)
          out_stream.put(ch);
       ch=in_stream.get();
       count++;
     }
     if(ch!=EOF)
     {
     	out_stream.put(ch);
	 }
     count=0;
  }
  in_stream.close();
  out_stream.close();
  return 0;
}
