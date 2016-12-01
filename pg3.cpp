#include<iostream>
using namespace std;
class account
{
public:
	string cname;
	char type;
	int acno;


};
class curac:public account
{
	public:
		int bal=0;
		int inte=1;
		int minbal=100;
		
		void deposit(int x)
		{
			bal=bal+x;
		
		}
		void display()
		{
			cout<<"name"<<cname<<"\n"<<"type"<<type<<"acno"<<acno<<"\n";
			cout<<"the balence is"<<bal<<"\n";
		}
		void with(int z)
		{
			if(bal<minbal)
			{
				cout<<"not permitted bal is"<<bal<<"\n";
				
			
			}
			else
			{
			bal=bal-z;
			
			}
		}
		void penal()
		{
			if(bal<minbal)
			{
				bal=bal-23;
				cout<<bal;
			}
		
		}


};
class savac:public account
{
	public:
		int bal=0;
		int inte=1;
		int minbal=100;
		
		void deposit(int x)
		{
			bal=bal+x;
		
		}
		void display()
		{
			cout<<"name"<<cname<<"\n"<<"type"<<type<<"acno"<<acno<<"\n";
			cout<<"the balence is"<<bal;
		}
		void with(int z)
		{
			
			bal=bal-z;
			cout<<"balance after withdrawaal"<<bal<<"\n";
		
		}
		void intere()
		{
			inte=bal/20;
			bal=bal+inte;
			cout<<"interest is"<<inte<<"\n";
		}
		


};
int main()
{
curac a;
a.cname="debayan";
a.type='c';
a.acno=1000;
a.deposit(200);
a.with(100);
a.with(10);
a.penal();
a.display();
savac b;
b.cname="deb";
b.type='s';
b.acno=1000;
b.deposit(200);
b.with(100);
b.with(10);
//b.penal();
b.intere();
b.display();
return 0;
}

