#include<iostream>
using namespace std;
class shape
{
public:
	double x,y;
	void get_data(double m,double n)
		{
			x=m;
			y=n;
		}
	virtual void display()
	{
	        cout<< (x*y);
	}

};
class triangle : public shape
{
public:
	void display()
        {
               cout<<  (0.5*x*y)<<"\n";
        }

};
class rectangle:public shape
{
public:
	void display()
	{
	        cout<<(x*y);
	}

};
int main()
{
triangle a;
a.get_data(2,3);
rectangle b;
b.get_data(2,3);
a.display();
b.display();
return 0;


}
