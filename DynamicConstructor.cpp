#include<iostream>
using namespace std;

class integer
{
	int a;
	int b;
	public:
		integer()
		{
		}
		integer(int p)
		{
			a=b=p;
		}
		integer(int x, int y)
		{
			a=x;
			b=y;
		}
		void output()
		{
			cout<<"int==>>"<<a<<endl;
			cout<<"int==>>"<<b<<endl;
		}
};
int main()
{
	integer i1,i2;
	int a,b;
	cout<<"Enter integers";
	cin>>a>>b;
	i1=integer(a);		//dynamic allocation
	i2=integer(a,b);
	cout<<"First object"<<"\n";
	i1.output();
	cout<<"Second object"<<"\n";
	i2.output();
}
