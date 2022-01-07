#include <iostream>
using namespace std;
class A {
	int x=5;
	public:
		virtual void display()
		{
			cout<<"Base Class : "<<x<<endl;
		}
};
class B : public A {
	int y=10;
	public:
		void display()
		{
			cout<<"Derived Class : "<<y<<endl;
		}
};
int main()
{
	A *a;
	B b;
	a = &b;
	a->display();
	return 0;
}
