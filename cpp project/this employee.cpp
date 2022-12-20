#include<iostream>
using namespace std;
class employee
{
	private:
		int eid;
		string ename;
		float esalary;
		public:
			employee(int eid,string ename, float esalary)
			{
				this->eid=eid;
				this->ename=ename;
				this ->esalary=esalary;
			}
			void display()
			{
				cout<<"\n eid="<<eid;
				cout<<"\n name="<<ename;
				cout<<"\n salary="<<esalary;
			}
};
main()
{
	employee e1(1,"john",45000);
	e1.display();
}
