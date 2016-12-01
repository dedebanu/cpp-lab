#include<stdio.h>

class name
{
	int n;
	public:
	name() {}
	name(int n)
	{
		this->n=n;
	}
	void show()
	{
		printf("ID=%d\n",n);
	}
	friend void swap(name, name);
};
class dummy {
	friend void swap(name a, name b)
	{
		printf("For a:\n");
		a.show();
		printf("For b:\n");
		b.show();
		name t;
		t.n=b.n;
		b.n=a.n;
		a.n=t.n;
		printf("For a:\n");
		a.show();
		printf("For b:\n");
		b.show();
	}
};
int main()
{
	name n1(10),n2(20);
	dummy d;
	swap(n1, n2);
}
