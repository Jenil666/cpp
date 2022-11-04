#include<iostream>
#include<string.h>
using namespace std;
class N;
class I{
	public:
		int id;
		void sd1(int id)
		{
			this->id=id;
		}
		friend void dada(N,I);
};
class N{
	public:
		char name[50];
		void sd2(char name[50])
		{
			strcpy(this->name,name);
		}
		friend void dada(N,I);
};

void data(N n1,I i1)
{
	cout<<"Id = "<<	i1.id<<endl;
	cout<<"Name = "<<n1.name<<endl;
}

int main()
{
	I i;
	N n;
	i.sd1(1);
	n.sd2("jay");
	data(n,i);
	return 0;
}

