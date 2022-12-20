#include<iostream>
using namespace std;
class date
{
	protected:
		int dd,mm,yyyy;
		public:
			void get_date()
			{
				cout<<"\n enter date";
				cin>>dd>>mm>>yyyy;
			}
			void display_date()
			{
				cout<<"\n date="<<dd<<"-"<<mm<<"-"<<yyyy;
			}
};
class employee
{
	protected:
		int eid;
		string ename;
		float bsal;
		public:
			void get_emp()
			{
				cout<<"\n enter id";
				cin>>eid;
				cout<<"\n enter employee name";
				cin>>ename;
				cout<<"\n enter basic salary";
				cin>>bsal;
			}
			void display_emp()
			{
				cout<<"\n id="<<eid;
				cout<<"\n name="<<ename;
				cout<<"\n basic salary="<<bsal;
			}
};
class admin:public date,public employee
{
	protected:
		float insentive,gross;
		public:
			void get_admin()
			{
				cout<<"\n enter insentive";
				cin>>insentive;
				cout<<"\n enter gross";
				cin>>gross;
			}
			void display_admin()
			{
			cout<<"\n insentive="<<insentive;
			cout<<"\n gross="<<gross;
			}
};
main()
{
	admin a1;
	a1.get_date();
	a1.display_date();
	a1.get_emp();
	a1.display_emp();
	a1.get_admin();
	a1.display_admin();
}
