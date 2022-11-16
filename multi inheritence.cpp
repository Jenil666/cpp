#include<iostream>
using namespace std;
class A{
	public:
	 void roi()
	 {
	 	system("cls");
	 	int p,r,n,c;
	 	cout<<"Enter your principle amount: ";
		cin>>p;
		cout<<"Entercout your rate of intreast: ";
		cin>>r;
   		cout<<"Enter your time duration: ";
		cin>>n;
		c=(p*r*n)/100;
		cout<<"Rate of intreast: "<<c<<endl;
	 }
};

class B:public A{
	public:
		void asmd()
		{
			system("cls");
			int a,b,c,n;
			cout<<"Press\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
			cin>>n;
			if(n==1)
			{
				 cout<<"Enter your First value: ";
		         cin>>a;
		         cout<<"Entercout your Second value: ";
		         cin>>b;
		         c=a+b;
		         cout<<"Ans: "<<c;
		    }
			else if(n==2)
			{
				cout<<"Enter your First value: ";
		        cin>>a;
		        cout<<"Entercout your Second value: ";
		        cin>>b;
		        c=a+b;
		        cout<<"Ans: "<<c;
			}
			else if(n==3)
			{
				cout<<"Enter your First value: ";
		        cin>>a;
		        cout<<"Entercout your Second value: ";
		        cin>>b;
		        c=a+b;
		        cout<<"Ans: "<<c;
			}
			else if(n==4)
			{
				cout<<"Enter your First value: ";
		        cin>>a;
		        cout<<"Entercout your Second value: ";
		        cin>>b;
		        c=a+b;
		        cout<<"Ans: "<<c;
			}
			else 
			{
				cout<<"Please select valid choice!!!";
			}
		}
		
};

class C:public B{
	public:
		
		void result()
		{
			system("cls");
			int a,b,c,d,e,t;
			float per;
			cout<<"Enter the marks of First subject: ";
			cin>>a;
			cout<<"Enter the marks of Second subject: ";
			cin>>b;
			cout<<"Enter the marks of Third subject: ";
			cin>>c;
			cout<<"Enter the marks of Fourth subject: ";
			cin>>d;
			cout<<"Enter the marks of Fifth subject: ";
			cin>>e;
			t=a+b+c+d+e;
			per=(t*100)/500;
			if((a>0&&a<100)&&(b>0&&b<100)&&(c>0&&c<100)&&(d>0&&d<100)&&(e>0&&e<100))
			{
				if(per>33 && per<40)
				{
					cout<<"Total: "<<t<<endl;
					cout<<"You get e grade with "<<per<<"%"<<endl;
				}
				else if(per>41 && per<55)
				{
					cout<<"Total: "<<t<<endl;
					cout<<"You get d grade with "<<per<<"%"<<endl;
				}
				else if(per>56 && per<65)
				{
					cout<<"Total: "<<t<<endl;
					cout<<"You get c grade with "<<per<<"%"<<endl;
				}
				else if(per>66 && per<75)
				{
					cout<<"Total: "<<t<<endl;
					cout<<"You get b grade with "<<per<<"%"<<endl;
				}
				else if(per>76 && per<85)
				{
					cout<<"Total: "<<t<<endl;
					cout<<"You get a grade with "<<per<<"%"<<endl;
				}
				else
				{
					cout<<"Better luck nect time :):):)";
				}
			}
		}
		
};

int main ()
{
	int n;
	C c;
	cout<<"Press\n1.To find rate of intreast\n2.To perform arthemic function\n3.To find result of 5 subject";
	cin>>n;
	if(n==1)
	{
		c.roi();
		
	}
	else if(n==2)
	{
		c.asmd();
		
	}
	else if(n==3)
	{
		c.result();
		
	}
	return 0;
}

