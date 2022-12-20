#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		string name;
		float marks;
	public:
		student()// default constructer
		{
			rollno=1;
			name="johm";
			marks=78.56;
		
		}
		student(int r,string n,float m)//parameterize constructer
		{
			rollno=r;
			name=n;
			marks=m;
			
		}
		student(student & obj)//copy constructor
		{
			rollno=obj.rollno;
			name=obj.name;
			marks=obj.marks;
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
student s1;//calling of default constructer
s1.display();
student s2(2,"blake",56.78);//calling of parameterize construter
s2.display();
student s3(s2);//calling copy constructor
s3.display();
}
