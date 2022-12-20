#include<iostream>
using namespace std;
class rectangle
{
	private:
		int len, bre;
		public:
			void accept();
			void calculate();
};
void rectangle::accept()
{
	cout<<"\n enter len";
	cin>>len;
	cout<<"\n enter bre";
	cin>>bre;
}
void rectangle::calculate()
{
	int area;
	area=len*bre;
	cout<<"\n area of rectangle"<<area;
}
main()
{
rectangle r1;
r1.accept();
r1.calculate();
	
}
