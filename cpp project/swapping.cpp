#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"\n enter a";
	cin>> a;
	cout<<"\n enter b";
	cin>> b;
	c=a+b;
	cout<<"\n before swapping a="<<a<<"b="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n after swapping a="<<a<<"b"<<b;
}

