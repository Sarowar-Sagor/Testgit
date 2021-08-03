#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream input;
	ofstream out;
	input.open("infile.txt");
	out.open("outfile.txt");
	int a,b,c;
	cin>>a>>b>>c;
	out<<"the multiplication of a,b,c  "<<a*b*c<<endl;
	input.close();
	out.close();
}
