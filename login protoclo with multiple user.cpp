#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
		char na[50],pa[50];
	emp(char n[50],char p[50])
	{
		char pas[50],n1[50]={"Raj"},n2[50]={"Rahul"};
		strcpy(na,n);
		strcpy(pa,p);
		cout<<"Enter password: ";
		cin>>pas;
		system("cls");
		if( (strcmp(pa,pas)==0) && (strcmp(n1,na)==0))
    	{
    	  cout<<"Name: Raj \nID: 1002 \nAddress: Punagam \nSalary: 25000 \nPost: Product Manager";
    	}
    	else if((strcmp(pa,pas)==0) && (strcmp(n1,na)==0))
    	{
    		cout<<"Name: Rahul \nID: 1008 \nAddress: Vesu \nSalary: 35000 \nPost: Sales Manager";
    	}
	    else
	    {
		 if(strcmp(pa,pas)==1)
		 {
			cout<<"Enter correct passwor"<<endl;
		 }
		}
	}
};

int main()
{
	char n[50],l1[50]={"Raj"},l2[50]={"Rahul"};
	cout<<"Enter login id: ";
	cin>>n;
	if(strcmp(n,l1)==0)
	{
		emp e("Raj","1234");
		
	}
	else if(strcmp(n,l2)==0) 
	{
		emp e1("Rahul","1234");
	
	}
	else
	{
		cout<<"Enter correct id";
	}
	return 0;
}
