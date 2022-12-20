#include<iostream>
using namespace std;
class worker
{
	private:
	char name[20];
	int no_of_hours;
	public:
		void accept()
		{
		cout<<"\n enter worker name=";
		cin>>name;
		cout<<"\n enter no of hours=";
		cin>>no_of_hours;
		}
		void calculation(int rate=50)
		{
			cout<<"\n salary="<<no_of_hours*30*rate;
		}
};
main()
{
	worker w;
	w.accept();
	w.calculation();
}
