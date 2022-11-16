#include<iostream>
using namespace std;//hirachy inheritance
class A
{
   public:
   	void hocky()
   	{
   		cout<<"PR Sreejesh\nKrishan Bahadur Pathak\nHarmanpreet\nGurinder Singh\n"<<endl;
	}
	
	void cricket()
	{
		 cout<<"SR Tendulkar\nV Kohli\nSC GangulynR Dravid"<<endl;
	}
  
    void football()
	{
		cout<<"Lionel Messi\nCristiano Ronaldo\nXavi\nAndres Iniesta"<<endl;
	}   
	
	void all()
	{
		cout<<"Hocky players"<<endl;
		cout<<"PR Sreejesh\nKrishan Bahadur Pathak\nHarmanpreet\nGurinder Singh\n"<<endl;
		cout<<"Cricket players"<<endl;
		cout<<"SR Tendulkar\nV Kohli\nSC GangulynR Dravid"<<endl;
		cout<<"Footbal players"<<endl;
		cout<<"Lionel Messi\nCristiano Ronaldo\nXavi\nAndres Iniesta"<<endl;
	}

};
class B : public A
{
	public:
		void cri()
        {
        	A a;
	        a.cricket();	
		}
};
class C : public A
{
	public:
		void fotb()
        {
        	A a;
        	a.football();	
		}
	
};
class D : public A
{
	public:
		void hoky()
        {
        	A a;
	        a.hocky();	
		}
	
};
class E : public C
{
	public:
		void t1()
		{
			cout<<"Team 1\n\nSunil Chhetri\nBhaichung Bhutia\nShabbir Ali\nClimax Lawrence";
		}
	
};

class F : public C
{
	public:
		void t2()
		{
			cout<<"Team 2\nPeter Shilton\nWayne Rooney\nDavid Beckham\nSteven Gerrard";
		}
	
};

int main ()
{
	int n,n1;
	E e;
	F f;
	B b;
	D d;
	cout<<"Press\n1.To know all palyers name\n2.To know cricket player name\n3.to know foot ball player name\n4.to know hocky player name";
	cin>>n;
	if(n==1)
	{
		d.all();
	}
	else if(n==2)
	{
		b.cri();
	}
	else if(n==3)
	{
			cout<<"Press\n1.To know top players\n2.To know player in team 1\n3.To know player in team 2";
			cin>>n1;
			if(n1==1)
			{
				f.fotb();
			}
			else if(n1==2)
			{
				e.t1();
			}
			else if(n1==3)
			{
				f.t2();
			}
			else
			{
				cout<<"Enter valid choice";
			}
	}
	else if(n==4)
	{
		d.hoky();
	}
	else
	{
		cout<<"Enter valid choice";
	}
}

