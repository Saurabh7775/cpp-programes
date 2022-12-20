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
			cout<<"eid"<<eid;
			cout<<"name"<<name;
			cout<<"salary"<<salary;
		}
};
main()
{
	employee e1;
	e1.accept();
	e1.display();
}
