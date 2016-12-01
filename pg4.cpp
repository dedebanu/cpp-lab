#include<iostream>
using namespace std;
class staff
{
public:
	int code;
	string name;


};
class teacher:public staff
{
	public:
	string sub;
	void getdata(int x,string y,string z)
	{
		code=x;
		name=y;
		sub=z;
	}
	void display()
	{
		cout<<"code="<<code<<"\t"<<"name"<<name<<"\n";
		cout<<"subject"<<sub<<"\n";
	}
	

};
class typist:public staff
{
public:
	int speed;
	
	

};
class officer:public staff
{
	public:
	char grade;
	void getdata(int x,string y,char z)
	{
		code=x;
		name=y;
		grade=z;
	
	}
	void display()
	{
		cout<<"code="<<code<<"\t"<<"name"<<name<<"\n";
		cout<<"grade"<<grade<<"\n";
	}
	

};
class regular:public typist
{
	public:
	void getdata(int x,string y,int z)
	{
		code=x;
		name=y;
		speed=z;
	
	}
	void display()
	{
		cout<<"code="<<code<<"\t"<<"name"<<name<<"\n";
		cout<<"speed"<<speed<<"\n";
	}
	

};
class casual:public typist
{
public:
	int dailywage;
	void getdata(int x,string y,int z,int m)
	{
		code=x;
		name=y;
		speed=z;
		dailywage=m;
	
	}
	void display()
	{
		cout<<"code="<<code<<"\t"<<"name"<<name<<"\n";
		cout<<"speed"<<speed<<"\n";
		cout<<"dailywage"<<dailywage<<"\n";
	}
};
int main()
{
 teacher a;
 a.getdata(1,"Deba","phy");
 a.display();
 officer b;
 b.getdata(2,"kutta",'a');
 b.display();
 regular c;
 c.getdata(3,"lol",100);
 c.display();
 casual d;
 d.getdata(4,"fff",120,400);
 d.display();
 return 0;


}
