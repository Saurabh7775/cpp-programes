#include<iostream>
using namespace std;
main()
{
	int i=1,n,fact=1;
	cout<<"\n enter n";
	cin>>n;
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	cout<<"\n factorial="<<fact;
}
