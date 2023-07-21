#include<iostream>
using namespace std;

class time
{
	int hr;
	int m;
	int s;
	public:
		void input()
		{
			cout<<"enter hour";
			cin>>hr;
			cout<<"enter minute";
			cin>>m;
			cout<<"enter second";
			cin>>s;
		}
		void output()
		{
			cout<<hr<<"::"<<m<<"::"<<s;
		}
		void caltime()
		{
			int m1,s1;
			if(s>60)
			{
				s1=s/60;
				s=s%60;
				m=m+s1;
			}
			if(m>60)
			{
				m1=m/60;
				m=m%60;
				hr=hr+m1;
			}
			if(hr>23)
				hr=hr-24;
		}
		time addt(time tem)
		{
			time t3;
			t3.hr=hr+tem.hr;
			t3.m=m+tem.m;
			t3.s=s+tem.s;
			return t3;
		}
};

int main()
{
	time t1,t2,t3;
	t1.input();
	t2.input();
	t1.caltime();
	t2.caltime();
	t1.output();
	cout<<"\n";
	t2.output();
	cout<<"\n";
	t3=t1.addt(t2);
	t3.caltime();
	cout<<"ADDITION OF TIME IS = ";
	t3.output();
	
}
