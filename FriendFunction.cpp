#include<iostream>
using namespace std;
class complex
{
	int r;
	int i;
	public:
		void input()
		{
			cout<<"Enter real";
			cin>>r;
			cout<<"Enter imaginary";
			cin>>i;
		}
		void output()
		{
			cout<<r<<"+"<<i<<"j";
		}
		friend complex addc(complex p,complex q);
};

complex addc(complex p,complex q)
{
	complex a;
	a.r=q.r+p.r;
	a.i=q.i+p.i;
	return a;
}

int main()
{
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c1.output();
	cout<<"\n";
	c2.output();
	cout<<"\n";
	c3=addc(c1,c2);
	cout<<"AFTER ADDITION-->> ";
	c3.output();
}
