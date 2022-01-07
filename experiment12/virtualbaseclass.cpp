#include<iostream>
using namespace std;
class A{
	public:
	int num;
	A(){
	num = 20;
	}
	};
class B:public virtual A{};
class C:public virtual A{};
class D:public B, public C{};
int main(){
	D obj;
	cout<<"number ="<<obj.num<<endl;

	return 0;
	}
