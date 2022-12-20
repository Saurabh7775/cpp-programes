#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		float per;
		string name, add;
		public:
			void accept();
			void display();
};
void student::accept()
{
	cout<<"\n enter student roll no.=";
	cin>>rollno;
	cout<<"\n enter student name=";
	cin>>name;
	cout<<"\n enter student address=";
	cin>>add;
	cout<<"\n enter student percentage=";
	cin>>per;
}
void student::display()
{
	cout<<"\n Student Name ="<<name;
	cout<<"\n Student Roll No. ="<<rollno;
	cout<<"\n Student Address ="<<add;
	cout<<"\n Percentage ="<<per;
}
main()
{
	student s1;
	s1.accept();
	s1.display();
}
