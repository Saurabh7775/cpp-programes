//virtual function
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void display()
		{
			cout<<"\n it is base class";
		}
};
class derrived:public base
{
	public:
		void display()
		{
			cout<<"\n it is derrived class";
		}
};
main()
{
	base *bptr;
	base b;
	derrived d;
	bptr=&b;
	bptr->display();
	bptr=&d;
	bptr->display();	
}
