#include<iostream>
using namespace std;
int main()
{
	int *a;
	a=new int;
	cout<<"Number of bytes allocated: "<<sizeof(a)<<endl;
	*a=100;
	cout<<"Value of a is"<<a<<endl;
	return 0;
}
