#include<iostream>
using namespace std;
class hello
{
	public:
		hello()
		{
			cout<<"\n it is constructor";
		}
		~hello()
		{
			cout<<"\n it is distructor";
		}
		void display()
		{
			cout<<"\n it is display method";
		}
};
main()
{
	hello h1,h2,h3,h4;
	h1.display();
}
