#include<iostream>
using namespace std;
class test
{
	public:
		int code;
		static int count;	//static data member;
		void setcode()
		{
			code=count++;
		}
		void showcode()
		{
			cout<<"\n code="<<code;
		}
		static void showcount()	//static member function;
		{
			cout<<"\n count="<<count;
		}
};
int test::count=0;
main()
{
	test t1;
	test t2;
	t1.setcode();
	t1.showcode();
	t2.setcode();
	t2.showcode();
	test::showcount();
	test t3;
	t3.setcode();
	test::showcount();
}
