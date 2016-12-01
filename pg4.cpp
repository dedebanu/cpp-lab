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
	 void display()
	{
	        cout<<"rectanglee"<< (x*y)<<"\n";
	}

};
class triangle : public shape
{
public:
	void display()
        {
               cout<<"triangle"<<  (0.5*x*y)<<"\n";
        }

};
class rectangle:public shape
{
public:
	

};
class circle:public shape
{
public:
        void display()
        {
                cout<<"circle"<<(3.14*x*x)<<"\n";
        }

};
int main()
{
triangle a;
a.get_data(2,3);
//b.get_data(2,3);
a.display();
//b.display();
rectangle b;
//shape d;
shape *ptr;
ptr=&b;
ptr->get_data(2,3);
//ptr=&d;
ptr->display();
circle c;
c.get_data(2,0);
c.display();
return 0;


}
