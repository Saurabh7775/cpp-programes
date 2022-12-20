#include<iostream>
using namespace std;
main()
{
	int i,n,fact;
	cout<<"enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	}
	cout<<"factorial="<<fact;
}
