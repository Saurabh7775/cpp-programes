#include<iostream>
using namespace std;
main()
{
	int temp;
	cout<<"enter tempreture in centigrade=";
	cin>>temp;
	if(temp<0)
	{
		cout<<"freezing Wheather";
	}
	else if(temp>=0&&temp<=10)
	{
	cout<<"Very Cold Wheather";
	}
	else if(temp>10&&temp<=20)
	{
		cout<<"cold Wheather";
	}
	else if(temp>20&&temp<=30)
	{
		cout<<"Normal Tempreture";
	}
	else if(temp>30&&temp<40)
	{
		cout<<"Its Hot";
	}
	else
	{
		cout<<"Its Very Hot";
	}
}
