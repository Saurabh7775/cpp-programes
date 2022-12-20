//function overriding
#include<iostream>
using namespace std;
class base
{
	public:
		void display()
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
	derrived d;
	d.display();
}
