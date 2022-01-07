#include<iostream>
#include<string.h>
using namespace std;
class student
{
	string sname;
	int rollno;
	char grade;
	public:
		void read()
		{
		cin>>sname;
		cin>>rollno;
		cin>>grade;
	}
	void display()
	{
		cout<<"name:"<<sname<<endl;
		cout<<"ROLLno:"<<rollno<<endl;
		cout<<"grade:"<<grade<<endl;
		
	}
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
	{
		cout<<"enter student details:"<<endl;
		s[i].read();
	}
	for(i=0;i<3;i++)
	{
		cout<<"enter student details:"<<endl;
		s[i].display();
	}
	return 0;
}
