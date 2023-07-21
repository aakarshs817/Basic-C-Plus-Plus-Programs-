#include<iostream>
using namespace std;

class a
{
	private:
		int i;
	public:
		int j;
		void input()
		{
			cout<<"Enter I and J values";
			cin>>i>>j;
		}
		void output()
		{
			cout<<"I==>> "<<i<<endl;
			cout<<"J==>> "<<j<<endl;
		}
};
class b:public a
{
	private:
		int x;
	public:
		int y;
		void input2()
		{
			cout<<"Enter X and Y values";
			cin>>x>>y;
		}
		void output2()
		{
			cout<<"X==>> "<<x<<endl;
			cout<<"Y==>> "<<y<<endl;
		}
};

int main()
{
	b obj;		//a class inherited publically in b
	obj.input();
	obj.input2();
	obj.output();
	obj.output2();
}
