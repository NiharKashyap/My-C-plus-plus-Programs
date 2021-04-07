#include<iostream>
using namespace std;
template<class T>
T comp(T arr[], int n)
{
	T m = arr[0]; 
   	for (int i = 0; i < n; i++) 
      if (arr[i] < m) 
         m = arr[i]; 
   
   return m; 
};
int main()
{
	int size;
	int arr[] = {10,20,5,50};
	size= sizeof(arr)/sizeof(arr[0]);
	cout<<comp(arr,size);
	return 0;
}
