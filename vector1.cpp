#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	int i,j;
	vector <int> v;
	for(i=0;i<5;i++)
	{
		v.push_back(i);
	}
	cout<<v.size()<<endl;
	v.insert(v.begin()+2,50);
	v.pop_back();
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

}
