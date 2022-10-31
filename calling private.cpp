#include<iostream>
using namespace std;
class emp {
	public:
		int a,b,c;
		void sum()
		{
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a+b;
            cout<<"Ans="<<c;
		}
	private:
		void min()
		{
			int a,b,c;
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a-b;
            cout<<"Ans="<<c;
		}
	public:
		void call()
		{
			emp e;
			e.min();
		}
};

int main ()
{
	emp e;
	e.sum();
	e.call();
	return 0;
}