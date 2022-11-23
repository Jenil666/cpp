#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
		char id[50][50],pass[50][50],idv[50][1],passv[50][1];
		int n,i,z;
		void rv()
		{
			cout<<"How many user you want to register: ";
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"Enter user login id to register: ";
				cin>>id[i];
				cout<<"Enter user password to register: ";
				cin>>pass[i];
			}
	         cout<<"Enter Your Id to verify: ";
	         cin>>idv[i];
			 cout<<"Enter your password to verify: ";
			 cin>>passv[i];
			 
			 for(i=0;i<n;i++)
			{
			   if(strcmp(id[i],idv[1])==0 && strcmp(pass[i],passv[1])==0)
			   {
			   	  z=1;
				  break;	 			   	  
			   }
			}
			if(z==1)
			{
				cout<<"Login succesful: ";
			}
			else
			{
				cout<<"Try again: ";
			}
		}
};

int main()
{
	A a;
	a.rv();
	return 0;
}