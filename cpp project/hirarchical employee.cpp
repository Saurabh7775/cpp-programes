#include<iostream>
using namespace std;
class employee
{
	protected:
		int eid;
		string ename;
		public:
			void accept()
			{
				cout<<"\n enter employee id=";
				cin>>eid;
				cout<<"\n enter employee name=";
				cin>>ename;
			}
			void display()
			{
				cout<<"\n employee id="<<eid;
				cout<<"\n employee name="<<ename;
			}
};
class worker:public employee
{
	protected:
		float os;
		public:
			void get()
			{
				cout<<"\n enter overtime salary";
				cin>>os;
			}
			void put()
			{
				cout<<"\n overtime salary="<<os;
			}
};
class manager:public employee
{
	protected:
		float aa;
		public:
			void getdata()
			{
				cout<<"\n enter additional allounce=";
				cin>>aa;
			}
			void putdata()
			{
				cout<<"\n additional allounce="<<aa;
			}
};
main()
{
	cout<<"\n \t Worker";
	worker w1;
	w1.accept();
	w1.display();
	w1.get();
	w1.put();
	cout<<"\n \t Manager";
	manager m1;
	m1.accept();
	m1.display();
	m1.getdata();
	m1.putdata();
}
