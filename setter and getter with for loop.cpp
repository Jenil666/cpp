#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
		int id;
		char name[50];
		void setter(int id,char name[50])
		{
			this->id=id;
			strcpy(this->name,name);
		}
		void getter()
		{
			cout<<id<<"  "<<name<<endl;
			
		}
};

int main()
{
	emp e[50];
	int id,i,n;
	char name[50];
	cout<<"Enter number of data: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter id: "<<endl;
		cin>>id;
		cout<<"Enter Name: "<<endl;
		cin>>name;
		e[i].setter(id,name);
	}
	cout<<"Id  "<<"Name"<<endl;
	for(i=0; i<n; i++)
	{
		e[i].getter();
	}
}
