#include<iostream>
using namespace std;
class A{
	public:
		void sum(int a,int b)
		{
			cout<<"ans :"<<a+b<<endl;
		}
		void sum(int x,int y,int z)
		{
			cout<<"ans :"<<x+y+z<<endl;
		}
};

int main ()
{
	A a;
	a.sum(10,10);
	a.sum(10,10,10);
	return 0;
}