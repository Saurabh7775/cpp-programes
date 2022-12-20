#include<iostream>
using namespace std;
class batsman
{
	int bcode,innings,notout,runs;
	float batavg;
	char bname[20];
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}
	public:
		void acceptdata();
		void displaydata();
};
void batsman::acceptdata()
{
	cout<<"\n enter batsman code=";
	cin>>bcode;
	cout<<"\n enter batsman name=";
	cin>>bname;
	cout<<"\n enter innings, notout, runs";
	cin>>innings>>notout>>runs;
	calcavg();
}
void batsman::displaydata()
{
	cout<<"\n Batsman Name="<<bname;
	cout<<"\n Batsman Code="<<bcode;
	cout<<"\n Innings="<<innings;
	cout<<"\n Runs="<<runs;
	cout<<"\n Notout="<<notout;
	cout<<"\n Batting Average="<<batavg;
}
main()
{
	batsman b1;
	b1.acceptdata();
	b1.displaydata();
}
