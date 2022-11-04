#include<iostream>
#include<string.h>
using namespace std;
class B;
class C;
class A{
	public:
		int x;
		void m1(int x)
		{
			this->x=x;
		}
		friend void mul(A,B,C);
};
class B{
	public:
		int y;
		void m2(int y)
		{
			this->y=y;
		}
};
class C{
	public:
		int z;
			void m3(int z)
		{
			this->z=z;
		}
};
void mul(A a,B b,C c)
{
	int d;
	d=a.x+b.y+c.z;
	cout<<"Ans = "<<d;
}

int main()
{
   A a1;
   B b1;
   C c1;
   a1.m1(2);
   b1.m2(2);
   c1.m3(2);
   mul(a1,b1,c1);
   return 0;	
}
