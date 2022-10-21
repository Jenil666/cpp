//WAP to create a class which Employees and Print Employees details
//(emp_id, emp_name, emp_email, emp_degination, emp_salary).
#include<iostream>
using namespace std;
class employ{
	public:
		void Mukesh()
		{
			cout<<"Employ id = 9610"<<endl<<"Employ name = Mukesh"<<endl<<"Employ mail = mukesh1@gmail.com"<<endl<<"Employ degination = Managing head"<<"Employ salary = 35000";
		}
};

int main()
{
	char a[20];
	employ e;
	e.Mukesh();
	return 0;
}