#include<iostream>
using namespace std;
class A{
	int x = 5;
	public:
virtual int display(){
	return x;
	}
};
class B:public A{
	int y = 10;
	public:
	int display(){
	return y;
	}
};
int main(){
		A *a;
		B b;
		a= &b;
		cout<<a->display();
		return 0;
		}		
