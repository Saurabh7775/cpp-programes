#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
		public:
			counter()
			{
				count=0;
			}
			void inc_count()
			{
				count++;
			}
			int get_count()
			{
				return count;
			}
};
main()
{
	counter c1;
	cout<<"\n count=";
	cout<<c1.get_count();
	c1.inc_count();
	cout<<"\n count=";
	cout<<c1.get_count();
}
