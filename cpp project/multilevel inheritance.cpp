#include<iostream>
using namespace std;
class vehical
{
	protected:
		string brand;
		public:
			void accept()
			{
				cout<<"\n enter brand name=";
				cin>>brand;
			}
};
class car:public vehical
{
	protected:
		string cname;
		float price;
		public:
		void get()
		{
			cout<<"\n car name=";
			cin>>cname;
			cout<<"\n enter car price=";
			cin>>price;
		}
};
class bike:public car
{
	protected:
		string bname;
		float bmodel ;
		public:
			void getdata()
			{
				cout<<"\n enter bike name=";
				cin>>bname;
				cout<<"\n enter model no=";
				cin>>bmodel ;
			}
			void display()
			{
				cout<<"\n brand="<<brand;
				cout<<"\n carname="<<cname;
				cout<<"\n car price="<<price;
				cout<<"\n bike name="<<bname;
				cout<<"\n bike model no="<<bmodel ;
			}
};
main()
{
	bike b1;
	b1.accept();
	b1.get();
	b1.getdata();
	b1.display();
}
