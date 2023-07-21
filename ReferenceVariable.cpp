#include<iostream>
#include<iomanip>
//program to use reference variable and use setw function
using namespace std;

int main()
{
	int a=20;
	int & b=a;
	cout<<"Normal variable-->>"<<a<<endl;
	cout<<"Reference variable-->>"<<b<<endl;
	a=a+10;
	cout<<"Normal variable-->>"<<a<<endl;
	cout<<"Reference variable-->>"<<b<<endl;
	cout<<"SETW FUNCTION-->>"<<endl;
	cout<<setw(10)<<a;
	return 0;
}
