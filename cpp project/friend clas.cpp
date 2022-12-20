//friend class 
#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
		void setdata(int p)
		{
			x=p;
		}
		friend void max(A a,B b);
};
class B
{
	int y;
	public:
		void setdata(int q)
		{
			y=q;
		}
		friend void max(A a,B b);
};
void max(A a,B b)
{
	if(a.x>=b.y)
	{
		cout<<a.x;
	}
	else
	{
		cout<<b.y;
	}
}
main()
{
	A a;
	B b;
	a.setdata(20);
	b.setdata(10);
	max(a,b);
}
