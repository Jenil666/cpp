#include<iostream>
using namespace std;
void intr(int a,int b,int c);
int main()
{
	int a,b,c;
	cout<<"Enter your principle amount: ";
	cin>>a;
	cout<<"Enter your rate of intreast: ";
	cin>>b;
	cout<<"Enter your time duration: ";
	cin>>c;
	intr(a,b,c);
}

void intr (int a,int b,int c)
{
	float n;
	n=(a*b*c)/100;
	cout<<"Intreast = "<<n;
}
