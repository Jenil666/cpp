#include<iostream>
using namespace std;
class A{
	public:
		void sum(int a,int b)
		{
			cout<<"ans :"<<a+b<<endl;
		}
};

class B : public A{
	public:
		void sum(int a,int b,int c)
		{
			
			A::sum(10,10);
			cout<<"ans: "<<a+b+c<<endl;
		}
};
int main ()
{
	B b;
	b.sum(10,10,10);
	return 0;
}