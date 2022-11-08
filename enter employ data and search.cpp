#include<iostream>
#include<string>
using namespace std;
class Emp{
	public:
		int id;
		char name[50],address[50],section[50];
		void data(int id,char name[50],char section[50],char address[50])
		{
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->section,section);
			strcpy(this->address,address);
		}
		void set()
		{
			cout<<"ID: "<<id<<endl;
			cout<<"SECTION: "<<section<<endl;
			cout<<"ADDRESS: "<<address<<endl;
		}
};

int main()
{
	Emp e[50];
	int id,n,i,a,check;
	char name[50],address[50],section[50],x[50];
	cout<<"How many employ data you want to enter: ";
	cin>>n;
	cout<<endl;
	for(i=0; i<n; i++)
	{
		cout<<"Enter name of "<<i+1<<" employ: ";
		cin>>name;
		cout<<"Enter id of "<<i+1<<" employ: ";
		cin>>id;
		cout<<"Enter sectionof "<<i+1<<" employ: ";
		cin>>section;
		cout<<"Enter Address of "<<i+1<<" employ: ";
		cin>>address;
		e[i].data(id,name,section,address);
		cout<<endl;
	}
	
	cout<<"Enter name of employ to see details: ";	
	cin>>x;
	for(i=0; i<n; i++)
	{
		if(strcmp(name,x)==0)
		{
			e[i].set();
			check = 1;
			break;
		}
	}
	
	if(check!=1)
	{
		cout<<"Enter valid name!!!";
	}
	
	return 0;
}