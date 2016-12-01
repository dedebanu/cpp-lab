#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int code;


};
class account: virtual public person
{
	public:
		
		int pay;


};
class admin: virtual public person
{
	public:
		
		int experience;


};
class master:public account,public admin
{
	public:
		void getdata(string x,int y,int z,int m)
		{
			  name=x;
			 code=y;
			 experience=z;
			pay=m;
		
		
		}
		void display()
		{
			cout<<"name="<<name<<"\n";
			cout<<"code="<<code<<"\n";
			cout<<"experience="<<experience<<"\n";
			cout<<"pay="<<pay<<"\n";
		
		}
		


};
int main()
{
master a;
a.getdata("deba",1,12,3400);
a.display();
return 0;



}
