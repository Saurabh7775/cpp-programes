#include<iostream>
using namespace std;
class employee
{
	protected:
		int id;
		string name;
		public:
			void accept()
			{
				cout<<"\n enter id=";
				cin>>id;
				cout<<"\n enter name=";
				cin>>name;
			}
};
class person:public employee
{
	protected:
		int bs,hra,da,ta;
		public:
			void get()
			{
				cout<<"\n enter basic salary=";
				cin>>bs;
			}
			void put()
			{
				hra=bs*12/100;
				da=bs*18/100;
				ta=bs+hra+da;
				cout<<"\n id="<<id;
				cout<<"\n name="<<name;
				cout<<"\n bs="<<bs<<"\n hra="<<hra<<"\n da="<<da<<"\n ta="<<ta;
			}
};
main()
{
	person p1;
	p1.accept();
	p1.get();
	p1.put();
}
