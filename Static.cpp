#include<iostream>
using namespace std;

class acnt
{
	float i;
	float t;
	static float r;
	float p;
	public:
		void input()
		{
			cout<<"Enter time";
			cin>>t;
			cout<<"Enter principal";
			cin>>p;
			cout<<"Enter rate of interest";
			cin>>r;
		}
		void output()
		{
			i=(p*r*t)/100;
			cout<<"Interest = "<<i;
		}
		static void changeroi()
		{
			cout<<"Enter roi";
			cin>>r;
		}
};
float acnt::r;
int main()
{
	char ans;
	acnt a;
	a.input();
	a.output();
	cout<<"\n";
	cout<<"Want to change rate of interest(y/n)";
	cin>>ans;
	if(ans=='y' || ans=='Y')
	{
		acnt::changeroi();
		a.output();
	}
}
