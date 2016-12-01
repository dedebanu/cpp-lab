/*moodify the programme to include contructor for all the three classes*/
#include<iostream>
using namespace std;
class a
{
	public:
		int g,b,c;
		a()
		{}
		a(int x)
		{
			g=x;
		
		
		}
		void display()
		{
		cout<<"a="<<g<<"b="<<b<<"c="<<c<<"\n";
		
		}


};
class d:: public a
{
	public:
		d()
		{}
		d(int y)
		{
			b=y;	
		
		}

};
class e ::public a
{
	public:
		e()
		{}
		e(int z)
		{
			c=z;
		
		}
};
int main()
{
	a oba(5);
	d obd(10);
	e obe(15);
	//oba.display();
	return 0;


}


