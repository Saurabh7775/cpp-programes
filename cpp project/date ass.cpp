#include<iostream>
using namespace std;
class date
{
	private:
		int dd,mm,yyyy;
		public:
			date()
			{
				dd=31;
				mm=05;
				yyyy=1999;
			}
			void display()
			{
				cout<<"\n The entered date is";
				cout<<dd<<"/"<<mm<<"/"<<yyyy<<"\n";
			}
};
main()
{
	date date1;
	date1.display();
}
