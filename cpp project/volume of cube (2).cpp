#include<iostream>
using namespace std;
class cube
{
	private:
		int v,a;
		public:
			cube(int x)
			{
				a=x;
			}
			void calculate()
			{
				v=a*a*a;
				cout<<"\n Volume="<<v;
			}
};
main()
{
	cube c(2);
	c.calculate();
}
