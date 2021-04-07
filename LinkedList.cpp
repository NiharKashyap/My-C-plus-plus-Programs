#include<stdio.h>
#include<iostream>

using namespace std;

typedef int E;

class Node
{
	public:
		E data;
		Node *next;
		Node()
		{
			
		}
		Node(E d)
		{
			data = d;
			next = NULL;
		}	
};
class List : public Node
{
	public:
		int count;
		Node *curr;
		Node *head;
		Node *tail;
		
		List()
		{
			curr=head = tail = NULL;
			count=0;
		}
		~List()
		{
			removeAll();
		}
		void next()
		{
			if(curr==NULL)
				curr = head;
			else
				curr = curr->next;
		}
		void prev()
		{
			
		}
		int getValue()
		{
			return curr->data;	
		}
		void addBack(int data)
		{
			Node *tmp = new Node(data);
			
			if(tail==NULL)
			{
				head = tail = tmp;
				count++;
				return;
			}
			tail->next = tmp;
			tail = tmp;
			count++;
		}
		void addFront(int data)
		{
			Node *tmp = new Node(data);
			
			if(tail==NULL)
			{
				head = tail = tmp;
				count++;
				return;
			}
			tmp->next = head;
			head = tmp;
			count++;	
		}
		
		void remove()
		{
			Node *temp = head;
			head = head->next;
			cout<<"Deleted "<<temp->data;
			delete temp;
			count--;
		}
		void disp()
		{
			Node *temp = head;
			next();
			cout<<"List is ";
			for(int i=0;i<count;i++)
			{
				cout<<getValue();
				next();
			} 
		}
		void removeAll()
		{
			cout<<"Destroyed";
			for(int i=0;i<count;i++)
			{
				curr = head;
				head = head->next;
				delete curr;
			}
		}		
};
int main()
{
	List l;
	l.addBack(1);
	l.addFront(2);
	l.addBack(3);
	l.addFront(4);
	//l.remove();
	//l.remove();
	l.disp();
	
	return 0;
}
