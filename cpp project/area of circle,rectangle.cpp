#include<iostream>
using namespace std;
//function overloading
int area(int a,int b)
{
	return 1*b;
}
double area(int r)
{
	return 3.14*r*r;
}
main()
{
	cout<<"\n area of rectangle="<<area(4,5);
	cout<<"\n area of circle="<<area(2);
}
