#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		string name;
		float marks;
	public:
		student()
		{
			rollno=1;
			name="johm";
			marks=78.56;
			
		}
		void display()
		{
			cout<<"\n rollno="<<rollno;
			cout<<"\n name="<<name;
			cout<<"\n marks="<<marks;
		}
};
main()
{
student s1;
s1.display();
}
