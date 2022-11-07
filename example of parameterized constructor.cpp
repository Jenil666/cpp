//5. WAP to demonstrate example of parameterized constructor.
#include<iostream>
using namespace std;
class emp{
	public:
		int a,b;
		emp()
		{
		   cout<<"Enter the value of A: ";
		   cin>>a;
		   cout<<"Enter the value of B: ";
		   cin>>b;
		}
		void sum ()
		{
			cout<<"Sum = "<<a+b;
		}
};
int main ()
{
	emp e;
	e.sum();
	return 0;
}
