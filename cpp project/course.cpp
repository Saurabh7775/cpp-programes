#include<iostream>
using namespace std;
class spark
{
	protected:
		float contact;
		string address,name;
		public:
			void accept()
			{
				cout<<"\n enter class name=";
				cin>>name;
				cout<<"\n enter class address=";
				cin>>address;
				cout<<"\n enter class contact no=";
				cin>>contact;
			}
			void display()
			{
				cout<<"\n Class Name="<<name;
				cout<<"\n Class Address="<<address;
				cout<<"\n Contact No.="<<contact;
			}
};
class course:public spark
{
	protected:
		string course1,course2,course3;
		public:
			void get()
			{
				cout<<"\n enter course1=";
				cin>>course1;
				cout<<"\n enter course2=";
				cin>>course2;
				cout<<"\n enter course3=";
				cin>>course3;
			}
			void put()
			{
				cout<<"\n Course 1="<<course1;
				cout<<"\n Course 2="<<course2;
				cout<<"\n Course 3="<<course3;
			}
};
main()
{
	course c1;
	c1.accept();
	c1.display();
	c1.get();
	c1.put();
}
