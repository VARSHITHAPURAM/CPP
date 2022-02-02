#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char input[50];
    ofstream os;
    os.open("Sample.txt");
    cout<<"Details of sample file:"<<endl;
    cout<<"Enter name :"<<endl;
    cin.getline(input,50);
    os<<input<<endl;
    cout<<"Enter roll number:"<<endl;
    cin>>input;
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("Sample.txt");
    cout<<"Reading from the file"<<endl;
    while(getline(is,line)) {
        cout<<line<<endl;
    }
    is.close();

    return 0;
}
