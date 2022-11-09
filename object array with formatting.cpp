#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
		int id,sa;
		char name[50];
		void setter(int id,char name[50],int sa)
		{
			this->id=id;
			this->sa=sa;
			strcpy(this->name,name);
		}
		void getter()
		{
			cout<<id<<"		"<<name<<"		"<<sa<<"		"<<endl;
		}
};

int main()
{
	emp e[50];
	int i,n,id,sa;
	char name[50];
	cout<<"How Many Employ Data You Want To Enter: ";
	cin>>n;
	cout<<endl;
	for(i=0; i<n; i++)
	{
		cout<<"Enter Employ Id: ";
		cin>>id;
		cout<<"Enter Employ Name: ";
		cin>>name;
		cout<<"Enter Employ Salary: ";
		cin>>sa;
		e[i].setter(id,name,sa);
		cout<<endl;
	}
	system("cls");
	cout<<"----------------------------------------------"<<endl;
	cout<<"ID		NAME		SALARY"<<endl;
	cout<<"----------------------------------------------"<<endl;
	for(i=0; i<n; i++)
	{
		e[i].getter();
	}
	return 0;
}