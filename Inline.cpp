#include<iostream>
using namespace std;
//program to implement inline function in a class
class rect
{
	int l;
	int b;
	int arearec(int x, int y)
	{
		return(x*y);
	}
	public:
		void input()
		{
			cout<<"Enter length of rectangle"<<endl;
			cin>>l;
			cout<<"Enter breadth of rectangle"<<endl;
			cin>>b;
		}
		void output()
		{
			cout<<"Length-->>"<<l<<endl;
			cout<<"Breadth-->>"<<b<<endl;
			cout<<"Area of rectangle-->>"<<arearec(l,b);
		}
};

int main()
{
	rect r;
	r.input();
	r.output();
}
