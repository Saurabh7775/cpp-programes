//program to read data from another file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("courses.cpp");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
}
