// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>

using namespace std;

class car
{
    
    public:
        int a,b;
        car(int a1, int b1)
        {
            a = a1;
            b = b1;
        }
        car(const car &c1)
        {
            cout<<"Copy called";
            
            a = c1.b;
            b = c1.a;
        }
        int getValA()
        {
            return a;
        }
        int getValB()
        {
            return b;
        }
        
};

int main() {
    // Write C++ code here
    car a(10,20);
    car b=a;
    
    cout<<"For a ";
	cout<<a.getValA();
	cout<<" ";
	cout<<a.getValB();
    cout<"For b ";
	cout<< b.getValA();
	cout<<" ";
	cout<<a.getValB();
    
    return 0;
}
