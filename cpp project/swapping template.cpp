#include<iostream>
using namespace std;
template<class t>
void swaping(t x,t y)
{
	t temp;
	temp=x;
	x=y;
	y=temp;
}
 main()
{
	int x,y;
	cout<<"\n enter two numbers=";
	cin>>x>>y;
	cout<<"\n before swap:";
	cout<<"\n x value is="<<x;
	cout<<"\n y value is="<<y;
	swap(x,y);
	cout<<"\n\n after function template=\n";
	cout<<"\n x value is="<<x;
	cout<<"\n y value is="<<y;
	float p=2.5,q=4.5;
	swap(p,q);
	cout<<"\n p value is="<<p;
	cout<<"\n q value is="<<q;
	char i='a',j='b';
	swap(i,j);
	cout<<"\n i value is="<<i;
	cout<<"\n j value is="<<j;
}
