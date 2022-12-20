#include<iostream>
using namespace std;
class fact
{
	int n,i,facto;
	public:
		fact(int x)
		{
			n=x;
			facto=1;
		}
		fact(fact&x)
		{
			n=x.n;
			facto=1;
		}
		void calculate()
		{
			for(i=1;i<=n;i++)
			{
				facto=facto*i;
			}
		}
		void display()
		{
			cout<<"\n Factorial="<<facto;
		}
};
main()
{
	int x;
	cout<<"\n enter value=";
	cin>>x;
	fact f1(x);
	f1.calculate();
	f1.display();
	fact f2(f1);
	f2.calculate();
	f2.display();
}
