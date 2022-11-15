#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
		int p,r,n;
		void data()
		{
		cout<<"Enter your principle amount: ";
		cin>>p;
		cout<<"Enter your rate of intreast: ";
		cin>>r;
   		cout<<"Enter your time duration: ";
		cin>>n;
	    }
};

class B: public A{
	public:
		int c;
		void process()
		{
			c=(p*r*n)/100;
		}
};

class C: public B{
	public:
		void result()
		{
			cout<<"Your Intreast: "<<c<<endl;
		}
};

int main ()
{
	C c;
	c.data();
	c.process();
	c.result();
	return 0;
}
