#include<iostream>
#include<string.h>
using namespace std;
struct student {
	string sname,branch;
	int rollno,marks;
	};
int main()
{
	student s1;
	cout<<"enter student details: "<<endl;
	cin>>s1.sname;
	cin>>s1.rollno;
	cin>>s1.marks;
	cin>>s1.branch;
	cout<<"Name: "<<s1.sname<<endl;
	cout<<"Roll No: "<<s1.rollno<<endl;
	cout<<"Marks: "<<s1.marks<<endl;
	cout<<"Branch: "<<s1.branch<<endl;
	return 0;
}
