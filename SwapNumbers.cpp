//program to swap two numbers
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter values of first number A"<<endl;
	cin>>a;
	cout<<"Enter value of second number B"<<endl;
	cin>>b;
	cout<<"Before swapping"<<endl;
	cout<<"A= "<<a<<endl;
	cout<<"B= "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping"<<endl;
	cout<<"A= "<<a<<endl;
	cout<<"B= "<<b<<endl;
	return 0;
}
