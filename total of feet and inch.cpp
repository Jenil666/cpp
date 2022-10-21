#include<iostream>
using namespace std;
class dis{
	public:
		void dist()
		{
			int a,a1,b,b1,c,c1;
			cout<<"Please enter feet of first distance";
			cin>>a;
			cout<<"Please enter inch of first distance";
			cin>>a1;
			cout<<"Please enter feet of second distance";
			cin>>b;
			cout<<"Please enter feet of second distance";
			cin>>b1;
			c=a+b;
			c1=a1+b1;
			cout<<"Total ="<<c<<"feet and "<<c1<<"inch";
		}
};

int main()
{
	dis d;
	d.dist();
	return 0;
}