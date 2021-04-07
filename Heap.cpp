#include<stdio.h>
#include<iostream>

#define int E

using namespace std;

class Collection
{
	public:
		E *data;
		int count;
		
		Collection(Collection *C, int n)
		{
		if(n<1)
		{
			C->count=0;
			C->data = NULL;
			return(-1); 
		}
			C->count = n;
			C->data = (E*)malloc(sizeof(E) * C->count);
		}
		int disp(Coll *A)
		{
			int i;
			printf("\nSorted Data: ");
			for(i=0;i<A->count;i++)
			{
			printf("%d ", A->data[i]);    //Change here for int and float
			}
		return 0;
		}
};

class heap: public Collection
{
	public:
		int curr;
		Collection C;
		
		int insert_heap(heap *h, E data)  
		{
		int p,pos;
		pos = h->curr;
		p = (h->curr-1)/2;
		h->C.data[h->curr] = data;
		while(h->C.data[p]<h->C.data[pos])
		{
	
			if(h->C.data[p]<=h->C.data[pos])
			{
				D_type temp = h->C.data[p];    //Change here for int and float
				h->C.data[p] = h->C.data[pos];
				h->C.data[pos]=temp;
				pos = p; 
				p = (p-1)/2;
			}
				
		}
		
			h->curr++;
			return 0;
		}
	
};
int main()
{
	heap hi;
	hi.
}

