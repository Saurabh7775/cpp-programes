//operator overloading
#include<iostream>
using namespace std;
class test
{
	private:
		int num;
		public:
			test()
			{
				num=0;
			}
			void operator ++()
			{
				num=num+2;
			}
			void print()
			{
				cout<<"\n count is="<<num;
			}
};
main()
{
	test tt;
	tt.print();
	++tt;//calling of a function "void operator ++()"
	tt.print();
}
