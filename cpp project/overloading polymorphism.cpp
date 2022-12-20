#include<iostream>
using namespace std;
void product(int a,int b)
{
	cout<<"\n product="<<a*b;
}
void product(float a,float b)
{
	cout<<"\n product="<<a*b;
}
void product(int a,float b)
{
	cout<<"\n product="<<a*b;
}
void product(float a,int b)
{
	cout<<"\n product="<<a*b;
}
main()
{
	product(5,6);
	product(1.2f,2.1f);
	product(2,3.1f);
	product(4.1f,3);
}
