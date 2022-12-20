#include<iostream>
using namespace std;
main()
{
	int h;
	cout<<"enter height in cm=";
	cin>>h;
	if(h<150)
	{
		cout<<"the person is Dwarf";
	}
	else if(h>=150&&h<165)
	{
		cout<<"the person is Average Heighted";
	}
	else if(h>=165&&h<=195)
	{
		cout<<"the person is Taller";
	}
	else
	{
		cout<<"Abnormal Height";
	}
}
