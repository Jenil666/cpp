#include<iostream>
#include<string.h>
using namespace std;

class A{
	public: 
    int a;
    void data()
    {
    	cout<<"Enter first value: ";
    	cin>>a;
	}
};

class B :public A{
	public: 
	int b;
	void datab()
	{
		cout<<"Enter second value: ";
    	cin>>b;
    }
    
    void sum()
    {
    	int c;
    	c=a+b;
    	cout<<"Ans: "<<c;
	}
};

int main()
{
	B b;
	b.data();
	b.datab();
	b.sum();
	return 0;
}
