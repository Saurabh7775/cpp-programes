#include<iostream>
using namespace std;
template<class t>
class A
{
	t a;
	t b;
	public:
		A (t x,t y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"values of a and b are="<<a<<" ,"<<b;
		}
};
main()
{
	A<int> d(4,6);
	d.display();
	A<float> d1(4.3,6.5);
	d1.display();
}
