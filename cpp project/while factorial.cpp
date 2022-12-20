#include<iostream>
using namespace std;
main()
{
	int i=1,n,fact=1;
	cout<<"enter n";
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"factorial="<<fact;
}
