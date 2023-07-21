//program to calculate the factorial of a number
#include<iostream>
using namespace std;

int main()
{
	int i,n,fact=1;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
		fact=fact*i;
	cout<<"Factorial of "<<n<<" is "<<fact;
	return 0;
}
