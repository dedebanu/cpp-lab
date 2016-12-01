#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<math.h>
#include<queue>
#include<algorithm>

#define DEBUG(x) cout<< '>' << #x<<':'<<x<<endl;
#define ll long long int

#define intd(x); scanf("%d",&x);
#define intf(x); scanf("%f",&x);

using namespace std;

class account
{
	string cust_name;
	int acc_no;
	char type;
public:
	account() {}
	account(string name, int no, char t)
	{
		cust_name=name;
		acc_no=no;
		type=t;
	}
};

class cur_acct:public account
{
	float balance;
	float minBalance;
	float service;
public:
	cur_acct(float b, float mn, float ser)
	{
		balance=b;
		minBalance=mn;
		service=ser;
	}
	void deposit(float bln)
	{
		balance+=bln;
	}
	void display() // display the balance
	{
		cout<<"Current Balance: "<<balance<<endl;
	}
	//void interest() // compute and deposit interest
	//{}
	void withdraw(float bln) // permit withdrawal and update balance
	{
		if(balance<minBalance) {
			balance-=service;
		}
		balance-=bln;
		if(balance<0) {
			balance=0;
		}
	}
	void check() // check
	{}
};

class sav_acct:public account
{
	float balance;
public:
	sav_acct(float b)
	{
		balance=b;
	}
	void deposit(float bln)
	{
		balance+=bln;
	}
	void display() // display the balance
	{
		cout<<"Current Balance: "<<balance<<endl;
	}
	void interest(float r, int n, int t) // compute and deposit interest
	{
		balance=balance*pow((1+((r*1.0)/n)),(n*t));
	}
	void withdraw(float _balance) // permit withdrawal and update balance
	{
		if(balance<_balance) {
			cout<<"NOT POSSIBLE\n";
		} else {
			balance-=_balance;
		}
	}
	//void check() // check
	//{}
};

int main()
{
	cur_acct a(10,20,30);
	a.deposit(200);
	a.display();
	a.withdraw(100);
	a.display();
	
	return 0;
}

