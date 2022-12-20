#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
		public:
			sample(int p,int q)
			{
				a=p;
				b=q;
			}
			friend float mean(sample s);	//friend function
};
float mean(sample s)
{
	return(s.a+s.b)/2.0;
}
main()
{
	sample s(10,20);
	cout<<"\n mean"<<mean(s);
}

