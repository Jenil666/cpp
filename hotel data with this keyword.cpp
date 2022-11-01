// fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website
#include<iostream>
#include<string.h>
using namespace std;
class demo{
	public:
		int id,star,staff,es;
		char name[50],add[50],ra[50],web[50],room[50];
		void gitter(int id,char name[50],int star,int staff,char room[50],char add[50],char ra[50],char web[50],int es)
		{
			this->id=id;
			strcpy(this->add,add);
			strcpy(this->name,name);
			this->star=star;
			this->staff=staff;
			strcpy(this->room,room);
			this->es=es;
			strcpy(this->ra,ra);
			strcpy(this->web,web);
		}
		void settar()
		{
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Address: "<<add<<endl;
			cout<<"Star: "<<star<<endl;
			cout<<"Staff: "<<staff<<endl;
			cout<<"Room Size: "<<room<<endl;
			cout<<"Establish year: "<<es<<endl;
			cout<<"Rating: "<<ra<<endl;
			cout<<"Website: "<<web<<endl;
			cout<<endl;
		}
};

int main ()
{
	demo d,d1,d2,d3,d4;
	d.gitter(1,"Gangoor",3,45,"10*10","punagam","6/10","www.gangoor.com",1998);
	d.settar();
	d1.gitter(2,"Sweet sleeps",2,30,"10*12","katargam","6/10","www.sweetsleeps.com",1996);
	d1.settar();
	d2.gitter(3,"Thaker",4,54,"10*10","pal","8/10","www.thaker.com",1996);
	d2.settar();
	d3.gitter(4,"Premium stay",5,50,"10*13","vesu","9/10","www.premiumstay.com",2010);
	d3.settar();
	d4.gitter(5,"Luxary",40000,40,"12*11","adajan","7/10","www.luxary.com",2006);
	d4.settar();
	return 0;
}