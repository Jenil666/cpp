#include<iostream>
using namespace std;
class are{
	public:
		int a,b,c;
		void sum()
		{
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a+b;
            cout<<"Ans = "<<c;
		}
		void min()
		{
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a-b;
            cout<<"Ans = "<<c;
		}
		void mul()
		{
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a*b;
            cout<<"Ans = "<<c;
		}
		void div()
		{
			cout<<"Enter your first number: ";
			cin>>a;
            cout<<"Enter your second number: "; 			
            cin>>b;
            c=a/b;
            cout<<"Ans = "<<c;
		}
};

int main()
{
	int n;
	are a;
	cout<<"press \n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division";
	cin>>n;
	if(n==1)
	{
		a.sum();
	}
	else if(n==2)
	{
		a.min();
	}
	else if(n==3)
	{
		a.mul();
	}
	else if(n==4)
	{
		a.div();
	}
	else
	{
		cout<<"Enter valid choice";
	}
	return 0;
}