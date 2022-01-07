#include<iostream>
#include<string.h>
using namespace std;
class employee {
	public:
	string ename;
	int eno;
	float basic,DA,IT,GS;
	void getdetails()
	{
		cout<<"enter employee details: ";
		cin>>ename;
		cin>>eno;
		cin>>basic;
	}
	void putdetails()
	{
		cout<<"Name: "<<ename<<endl;
		cout<<"Number: "<<eno<<endl;
		cout<<"Basic: "<<basic<<endl;
		DA=0.52*basic;
		cout<<"DA: "<<DA<<endl;
		GS=DA+basic;
		IT=0.3*GS;
		cout<<"IT: "<<IT<<endl;
		cout<<"Net Salary: "<<GS-IT<<endl;
	}
};
int main()
{
	employee e[100];
	int n;
	cout<<"enter number of employees: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].getdetails();
		e[i].putdetails();
	}
	return 0;
}

