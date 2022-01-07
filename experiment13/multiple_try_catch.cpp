#include <iostream>
#include <exception>
using namespace std;
int main()
{
	int a,b;
	int c;
	cout<<"Enter a & b values: "<<endl;
	cin>>a>>b;
	try {
		if(b==0)
			throw b;
		else {
			c=a/b;
			cout<<"Result is : "<<c<<endl;
		}
	}
	catch (float b)	{
		cout<<" Divide by zero exception caught! [b= "<<b<<"]"<<endl;
	}
	catch (char b)	{
		cout<<" Exception caught!"<<endl;
	}
	catch(...)
	{
		cout<<" Divide by zero exception caught! "<<endl;
	}
	return 0;
}
