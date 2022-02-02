#include <iostream>
using namespace std;
class test  {
    private:
    int num;
    public:
    test()  {
        num=8;
    }
    void operator ++()
    {
        num=num+2;
    }
    void print()
    {
        cout<<"Count is :"<<num<<endl;
    }
};
int main()
{
    test t;
    ++t;
    t.print();
    return 0;
}
