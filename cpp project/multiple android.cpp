#include<iostream>
using namespace std;
class android
{
	protected:
		string version;
		public:
			void accept()
			{
				cout<<"\n enter version";
				cin>>version;
			}
};
class iphone:public android
{
	protected:
		int series;
		string model;
		public:
			void get()
			{
				cout<<"\n enter series";
				cin>>series;
				cout<<"\n enter Iphone Model";
				cin>>model;
			}
};
class application:public iphone
{
	protected:
		string app;
		public:
			void getdat()
			{
				cout<<"\n enter Application";
				cin>>app;
			}
		void display()
		{
				cout<<"\n enter version"<<version;
				cout<<"\n enter series"<<series;
				cout<<"\n enter Iphone Model"<<model;
				cout<<"\n enter Application"<<app;
		}
};
main()
{
	application a1;
	a1.accept();
	a1.get();
	a1.getdat();
	a1.display();
}
