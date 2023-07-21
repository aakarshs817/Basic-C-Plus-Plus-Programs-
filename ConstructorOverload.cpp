#include<iostream>
using namespace std;

class shoppen
{
	int price;
	int quan;
	public:
		shoppen()	//DEFAULT CONSTRUCTOR
		{
			price=quan=15;
		}
		shoppen(int a)	//CONSTRUCTOR WITH 1 ARGUEMENT
		{
			price=quan=a;
		}
		shoppen(int p,int q)	//CONSTRUCTOR WITH 2 ARGUEMENT
		{
			price=p;
			quan=q;
		}
		shoppen(shoppen &s)		//COPY CONSTRUCTOR
		{
			price=s.price;
			quan=s.quan;
		}
		void output()
		{
			cout<<"Price-->> "<<price;
			cout<<"\t";
			cout<<"Quantity-->> "<<quan;
		}
};

int main()
{
	shoppen s1;
	shoppen s2(10);
	shoppen s3(5,20);
	shoppen s4(s3);
	s1.output();
	cout<<"\n";
	s2.output();
	cout<<"\n";
	s3.output();
	cout<<"\n";
	s4.output();
	cout<<"\n";
}
