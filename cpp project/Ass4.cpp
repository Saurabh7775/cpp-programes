#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3;
	cout<<"Enter three sides of a triangle";
	cin>>s1>>s2>>s3;
	if(s1==s2&&s2==s3)
	{
		cout<<"this is an equilateral triangle";
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		cout<<"This is an isosceles triangle ";
	}
	else
	cout<<"This is a scalene triangle";
}
