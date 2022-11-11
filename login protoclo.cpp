#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
    	char idd[50],id[50],paa[50],pa[50];
      emp(char idd[50],char paa[50])
	 {
	 	cout<<"Enter your login id: ";
    		cin>>id;
    		cout<<"Enter your password: ";
    		cin>>pa;
    		if( (strcmp(idd,id)==0) && (strcmp(paa,pa)==0))
    		{
    		  cout<<"Login successful";
	     }
	     else
	     {
	     	if(strcmp(idd,id)==0)
	     	{
	     		cout<<"Enter correct password";
			}
			else if(strcmp(paa,pa)==0)
			{
				cout<<"Enter correct id";
			}
			else 
			{
				cout<<"Try again";
			}
		}
    		
	 } 	
};

int main()
{
	emp e("Admin","1234");
	return 0;
}