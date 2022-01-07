#include<iostream>
#include<string.h>
using namespace std;
class employee {
	public:
	string ename;
	int eno;
	float basic,DA,IT;
	void getdetails()
	{
		cout<<"enter employee details: ";
		cin>>ename;
		cin>>eno;
		cin>>basic;
		cin>>DA;
		cin>>IT;
	}
	void putdetails()
	{
		cout<<"Name: "<<ename<<endl;
		cout<<"Number: "<<eno<<endl;
		cout<<"Basic: "<<basic<<endl;
		cout<<"DA: "<<DA<<endl;
		cout<<"IT: "<<IT<<endl;
		cout<<"Net Salary: "<<basic+DA-IT<<endl;
	}
};
int main()
{
	employee e1;
	e1.getdetails();
	e1.putdetails();
	return 0;
}
