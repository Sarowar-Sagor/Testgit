#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	int i;
	vector <int> v;
	v.push_back(5);
	v.push_back(10);
	v.push_back(15);
	v.insert(v.begin()+0,50);
	for(i=0;i<v.size();i++)
	{
		cout << "Vector " << v[i] << endl;
	}
	cout << endl << v[0];

}
