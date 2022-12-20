#include<iostream>
using namespace std;
class book
{
	protected:
		string auther;
		public:
			void accept()
			{
				cout<<"\n enter auther name";
				cin>>auther;
			}
			void display()
			{
				cout<<"\n Auther="<<auther;
			}
};
class audio_casset
{
	protected:
		float pt;
		public:
			void get()
			{
				cout<<"\n enter playing time=";
				cin>>pt;
			}
			void put()
			{
				cout<<"\n Playing Time="<<pt;
			}
};
class publication:public book, public audio_casset
{
	protected:
		string tittle;
		float price;
		public:
			void getdata()
			{
				cout<<"\n enter tittle=";
				cin>>tittle;
				cout<<"\n enter price=";
				cin>>price;
			}
			void putdata()
			{
				cout<<"\n Tittle="<<tittle;
				cout<<"\n Price="<<price;
			}
};
main()
{
	publication p1;
	p1.accept();
	p1.display();
	p1.get();
	p1.put();
	p1.getdata();
	p1.putdata();
}
