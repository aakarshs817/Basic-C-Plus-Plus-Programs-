#include<iostream>
using namespace std;

class studata
{
	protected:
		float marks[10];
		float per;
	public:
		char name[100];
		int clas;
		void input()
		{
			int i;
			cout<<"Enter student name";
			fflush(stdin);
			cin.getline(name,20);
			cout<<"Enter class";
			cin>>clas;
			cout<<"Enter marks for five subjects";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		void calper()
		{
			int i;
			float sum=0;
			for(i=0;i<5;i++)
			{
				sum=sum+marks[i];
			}
			per=sum/5;
		}
		void output()
		{
			cout<<"Student name-->> "<<name<<endl;
			cout<<"Class-->> "<<clas<<endl;
			calper();
			cout<<"Percentage-->> "<<per<<endl;;
		}
};

class pardata:public studata
{
	protected:
		int fatno; // father mobile no.
		int motno; // mother mobile no.
	public:
		char fatname[20];
		char motname[20];
		void input2()
		{
			cout<<"Enter father name";
			fflush(stdin);
			cin.getline(fatname,20);
			cout<<"Enter mother name";
			fflush(stdin);
			cin.getline(motname,20);
			cout<<"Enter father mobile no.";
			cin>>fatno;
			cout<<"Enter mother mobile no.";
			cin>>motno;
		}
		void output2()
		{
			cout<<"Father name-->> "<<fatname<<endl;
			cout<<"Mother name-->> "<<motname<<endl;
			cout<<"Father number-->> "<<fatno<<endl;
			cout<<"Mother number-->> "<<motno<<endl;
		}
};

class scdata:public pardata
{
	protected:
		int scode;
	public:
		char scname[100];
		char city[100];
	void input3()
	{
		cout<<"Enter school code";
		cin>>scode;
		cout<<"Enter school name";
		fflush(stdin);
		cin.getline(scname,20);
		cout<<"Enter city";
		fflush(stdin);
		cin.getline(city,20);
	}
	void output3()
	{
		cout<<"School code--> "<<scode<<endl;
		cout<<"School name--> "<<scname<<endl;
		cout<<"School city--> "<<city<<endl;
	}
};

int main()
{
	cout<<"\n";
	cout<<"\t\t\tRESULTS";
	cout<<"\n";
	scdata s1;
	s1.input();
	s1.input2();
	s1.input3();
	cout<<"\t\t\tSTUDENT DETAILS\n";
	s1.output();
	cout<<"\t\t\tPARENT DETAILS\n";
	s1.output2();
	cout<<"\t\t\tSCHOOL DETAILS\n";
	s1.output3();
}
