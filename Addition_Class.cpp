//program to calculate addition using class 
#include<iostream>
using namespace std;

class sum
{
	private:		
		int a;
		int b;
	public:
		void input()
		{
			cout<<"Enter number 1"<<endl;
			cin>>a;
			cout<<"Enter number 2"<<endl;
			cin>>b;
		}
		void output()
		{
			int s;
			s=add();
			cout<<"Sum of "<<a<<" and "<<b<<" is "<<s<<endl;
		}
		int add()
		{
			int q;
			q=a+b;
			return q;
		}
};

int main()
{
	sum x;
	x.input();
	x.output();
}
