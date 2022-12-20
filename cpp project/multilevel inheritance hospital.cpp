#include<iostream>
using namespace std;
class hospital
{
	protected:
		string hname;
		string haddress;
		string contact;
		public:
			void accept()
			{
				cout<<"\n enter hospital name =";
				cin>>hname;
				cout<<"\n enter hospital address=";
				cin>>haddress;
				cout<<"\n enter contact no.=";
				cin>>contact;
			}
};
class patient:public hospital
{
	protected:
		int pid;
		string pname;
		string pwardno;
		public:
			void get()
			{
				cout<<"\n patient id=";
				cin>>pid;
				cout<<"\n patient name=";
				cin>>pname;
				cout<<"\n patient ward no.=";
				cin>>pwardno;
			}
};
class bill:public patient
{
	protected:
		int bdate,dd,mm,yy;
		float bammount;
		public:
			void getdata()
			{
				cout<<"\n enter bill date=";
				cin>>bdate;
				cout<<"\n enter bill ammount=";
				cin>>bammount;
			}
			void display()
			{
				cout<<"\n enter hospital address="<<haddress;
				cout<<"\n enter hospital name ="<<hname;
				cout<<"\n enter contact no="<<contact;
				cout<<"\n patient id="<<pid;
				cout<<"\n patient name="<<pname;
				cout<<"\n patient ward no="<<pwardno;
				cout<<"\n enter bill date="<<bdate<<dd<<"_"<<mm<<"_"<<yy;
				cout<<"\n enter bill ammount="<<bammount;
			}
};
main()
{
	bill b1;
	b1.accept();
	b1.get();
	b1.getdata();
	b1.display();
}
