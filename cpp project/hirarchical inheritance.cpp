#include<iostream>
using namespace std;
class staff
{
	protected:
		int scode;
		public:
			void accept()
			{
				cout<<"\n enter staff code=";
				cin>>scode;
			}
			void display()
			{
			cout<<"\n staff code"<<scode;
			}
};
class teacher:public staff
{
	protected:
		string subject;
		public:
			void get()
			{
				cout<<"\n enter subject=";
				cin>>subject;
			}
			void put()
			{
				cout<<"\n subject="<<subject;
			}
};
class officer:public staff
{
	protected:
		string grade;
		public:
			void getdata()
			{
				cout<<"\n enter grade";
				cin>>grade;
			}
			void putdata()
			{
				cout<<"\n grade="<<grade;
			}
};
main()
{
	cout<<"\n \t teacher";
	teacher t1;
	t1.accept();
	t1.display();
	t1.get();
	t1.put();
	cout<<"\n \t officer";
	officer f1;
	f1.accept();
	f1.display();
	f1.getdata();
	f1.putdata();
}
