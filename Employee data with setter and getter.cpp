//id, name, role, salary, experience, address, email and contact. Get 5 records.
#include<iostream>
#include<string.h>
using namespace std;
class demo{
	public:
		int role,salary,exp,con;
		char name[50],email[50],add[50],spa[50];
		void gitter(int i,char n[50],int s,int ex,char ad[50],char sp[50],char em[50],int co)
		{
			role=i;
			exp=ex;
			strcpy(add,ad);
			strcpy(spa,sp);
			con=co;
			strcpy(email,em);
			strcpy(name,n);
			salary=s;
		}
		void settar()
		{
			
			cout<<role<<"    "<<name<<"  "<<salary<<"      "<<exp<<"       "<<add<<"     "<<spa<<email<<"   "<<con<<endl;
		}
};

int main ()
{
	demo d,d1,d2,d3,d4;
	cout<<"Role  "<<"Name   "<<"Salary "<<"Experience  "<<"Address           "<<"Email        "<<"Contact"<<endl;
	d.gitter(1,"Mukesh",20000,1,"punagam"," ","mukesh@gmail.com",025656);
	d.settar();
	d1.gitter(2,"Ramesh",25000,2,"katargam","","ramesh@gmail.com",0257);
	d1.settar();
	d2.gitter(3,"Suresh",30000,3,"pal","     ","suresh@gmail.com",02564);
	d2.settar();
	d3.gitter(4,"Raghav",35000,4,"vesu","    ","raghav@gmail.com",0255);
	d3.settar();
	d4.gitter(5,"Rakesh",40000,5,"adajan","  ","rakesh@gmail.com",02510);
	d4.settar();
	return 0;
}