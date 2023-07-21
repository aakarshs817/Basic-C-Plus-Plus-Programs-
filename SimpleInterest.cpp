//program to calculate simple interest
#include<iostream>
using namespace std;

int main()
{
	float si,p,r,t;
	cout<<"Enter principal amount, rate of interest, time"<<endl;
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	cout<<"Simple Interest = "<<si;
	return 0;
}
