#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream fin;
	fin.open("file1.cpp");
	ofstream fout;
	fout.open("file3.cpp");
	char ch;
	while(!fin.eof());
	{
		fin.get(ch);
		fout<<ch;
	}
	fin.close();
	fout.close();
}
