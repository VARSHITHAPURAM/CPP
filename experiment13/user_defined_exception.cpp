#include <iostream>
#include <exception>
using namespace std;
struct balance : public exception 
{
	const char* what()  const throw()
	{
		return "Insufficient Balance";
	}
};
int main()
{
	int amount;
	cout<<"Enter amount to be withdrawn :";
	cin>>amount;
	try  {
		if(amount > 50000)
			throw balance();
		else
			cout<<"Sufficient balance"<<endl;
	}
	catch (balance &b)
	{
		cout<<" WARNING! "<<endl;
		cout<<b.what();
	}
	return 0;
}
