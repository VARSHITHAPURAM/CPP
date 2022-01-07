#include<iostream>
#include<string.h>
using namespace std;
class rectangle
{
	public:
		int length,breadth;
		rectangle() {
			length=10;
			breadth=20;
			}
		rectangle(int l, int b) {
			length=l;
			breadth=b;
			}
		rectangle(int i){
			length=i;
			breadth=i;
			}
		void area() {
			int a;
			a=length*breadth;
			cout<<"Area= "<<a<<endl;
			}
};
int main()
{
	rectangle a1;
	rectangle a2(10,20);
	rectangle a3(10);
	cout<<"object a1 is "<<endl;
	a1.area();
	cout<<"object a2 is "<<endl;
	a2.area();
	cout<<"object a3 is "<<endl;
	a3.area();
	return 0;
}
