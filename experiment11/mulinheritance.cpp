#include<iostream>
using namespace std;
class a1 {
	public:
	int a;
	a1()
	{
		a=5;
	}
	void display1()
	{
		cout<<"Output of a1 class: "<<a<<endl;
	} };
class a2: public a1 {
	public:
		int b;
		a2()
		{
			b=10;
		}
		void display2()
		{
		
			cout<<"Output of a2 class: "<<b<<endl;
		} };
class a3: public a2 {
	public:
		int c;
		a3()
		{
			c=15;
		}
		void display3()
		{
			cout<<"Output of a3 class: "<<c<<endl;
		} };
int main()
{
	a3 a;
	a.display1();
	a.display2();
	a.display3();
	return 0;
}
