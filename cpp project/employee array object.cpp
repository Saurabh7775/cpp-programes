#include<iostream>
using namespace std;
class employee
{
	private:
	int eid;
	float salary;
	char name[20];
	public:
		void accept()
		{
			cout<<"enter eid";
			cin>>eid;
			cout<<"enter name";
			cin>>name;
			cout<<"enter salary";
			cin>>salary;
		}
		void display()
		{
			cout<<"\neid\t"<<eid;
			cout<<"\nname\t"<<name;
			cout<<"\nsalary"<<salary;
		}
};
main()
{
	employee e[10];
	int n,i;
	cout<<"\n enter no of records";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		e[i].accept();
	}
	cout<<"\neid \tname \tsalary";
	for(i=0;i<=n;i++)
	{
		e[i].display();
	}
}
