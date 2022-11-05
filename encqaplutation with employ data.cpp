#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
	int id,ex;
	char na[50],co[50],add[50];
		void getter(int id,int ex,char na[50],char co[50],char add[50])
		{
			this->id=id;
			this->ex=ex;
			strcpy(this->na,na);
			strcpy(this->co,co);
			strcpy(this->add,add);
		}
		void setter()
		{
			cout<<id<<"  "<<na<<"      "<<ex<<"        "<<co<<"     "<<add<<endl;
		}
};
int main()
{
	emp e[50];
	int a,n,i,ex;
	char na[50],co[50],add[50];
	cout<<"How many data you want to enter: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter id: ";
		cin>>a;
		cout<<"Enter name: ";
		cin>>na;
		cout<<"Enter company: ";
		cin>>co;
		cout<<"Enter Address: ";
		cin>>add;
		cout<<"Enter experience: "<<endl;
		cin>>ex;
	    e[i].getter(a,ex,na,co,add); 
	}
	cout<<" "<<endl;
	cout<<"Id  "<<"name  "<<"experience  "<<"Company  "<<"Address"<<endl;
	for(i=0; i<n; i++)
	{
		e[i].setter();
	}
	return 0;
}
