#include<iostream>
using namespace std;
class student
{
	private:
	int rollno;
	float marks;
	char name[20];
	public:
		void accept()
		{
			cout<<"enter roll no";
			cin>>rollno;
			cout<<"enter name";
			cin>>name;
			cout<<"enter marks";
			cin>>marks;
		}
		void display()
		{
			cout<<"rollno"<<rollno;
			cout<<"name"<<name;
			cout<<"marks"<<marks;
		}
};
main()
{
	student s1;
	s1.accept();
	s1.display();
}
