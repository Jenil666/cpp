//6. WAP to create a class which Set values of data members using default and parameterized constructor.
#include<iostream>
#include<string.h>
using namespace std;
class emp{
	public:
		char n[50];
		int id;
		emp(char n[50],int id)
		{
			this->id=id;
			strcpy(	this->n,n);
			
			
		}
		void getter()
		{
			cout<<id<<" "<<n<<endl;
		}
};

int main ()
{
	emp e("Jay",111);
	e.getter();
	return 0;
}
