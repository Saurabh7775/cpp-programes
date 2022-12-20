#include<iostream>
using namespace std;
main()
{
	int a1,a2,a3,sum;
	cout<<"enter three angles of a triangle";
	cin>>a1>>a2>>a3;
	sum=a1+a2+a3;
	if(sum==180)
	{
		cout<<"Triangle is Formed";
	}
	else
	{
		cout<<"Triangle is not Formed";
	}
}
