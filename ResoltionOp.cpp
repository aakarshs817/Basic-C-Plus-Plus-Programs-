#include<iostream>
//program to use scope resolution operator to access global variable
using namespace std;
int x=50;

int main()
{
	int x=25;
	cout<<"Inside function-->>"<<x<<endl;
	cout<<"Accessing global variable"<<endl;
	cout<<"Using scope operator-->>"<<::x<<endl;
	return 0;
}
