#include<iostream>
using namespace std;
class demo{
	public:
		int a,b,c;
		void getter(int a,int b)
		{
			this->a=a;
			this->b=b;
			c=a+b;
			
		}
		void setter()
		{
			cout<<"Ans: "<<c<<endl;
			cout<<endl;
		}
};
int main()
{
	demo d;
	d.getter(2,2);
	d.setter();
	return 0;
}