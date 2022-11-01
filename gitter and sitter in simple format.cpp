#include<iostream>
#include<string.h>
using namespace std;
class demo{
	public:
		int id,salary;
		char name[50];
		void gitter(int i,char n[50],int s)
		{
			id=i;
			strcpy(name,n);
			salary=s;
		}
		void settar()
		{
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};

int main ()
{
	demo d,d1,d2;
	d.gitter(1,"Mukesh",25000);
	d.settar();
	d1.gitter(2,"Ramesh",20000);
	d1.settar();
	d2.gitter(3,"Suresh",30000);
	d2.settar();
	return 0;
}