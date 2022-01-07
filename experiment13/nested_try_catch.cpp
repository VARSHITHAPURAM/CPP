#include <iostream>
#include <exception>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a & b values: "<<endl;
	cin>>a>>b;
	try {
		try  {
		  if(b==0)
			throw b;
		  else {
			c=a/b;
			cout<<"Result is : "<<c<<endl;
		  }
		}
		catch (int b)	{
			cout<<" Exception caught! "<<endl;
			throw;
		}
	}
	catch (int b)	{
		cout<<" Divide by zero exception caught![as b = "<<b<<"]"<<endl;
	}
	return 0;
}
