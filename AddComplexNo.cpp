#include<iostream>
using namespace std;

class complex
{
	int r;
	int i;
	public:
		void input()
		{
			cout<<"Enter real part";
			cin>>r;
			cout<<"Enter imaginary part";
			cin>>i;
		}
		void output()
		{
			cout<<r<<"+"<<i<<"j";
		}
		void addc(complex c1,complex c2)
		{
			r=c1.r+c2.r;
			i=c1.i+c2.i;
		}
};

int main()
{
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c1.output();
	cout<<"\n";
	c2.output();
	cout<<"\n";
	c3.addc(c1,c2);
cout<<"ADDITION = ";
	c3.output();
}
