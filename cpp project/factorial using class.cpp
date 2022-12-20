#include<iostream>
using namespace std;
class factorial
{
	private:
		int num,fact=1;
		public:
			void calculate();
			void display();
};
void factorial::calculate()
{
	cout<<"\n enter a number=";
	cin>>num;
	if(num==0||num==1)
	{
		fact=1;
	}
	else
	{
		while(num>1)
		{
			fact=fact*num;
			num--;
		}
	}
}
void factorial::display()
{
	cout<<"\n Factorial="<<fact;
}
main()
{
	factorial f1;
	f1.calculate();
	f1.display();
}
