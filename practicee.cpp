/*
* C++ program to print all possible
* substrings of a given string
* without checking for duplication.
*/

#include<bits/stdc++.h>
using namespace std;

/*
* Function to print all (n * (n + 1)) / 2
* substrings of a given string s of length n.
*/
void printAllSubstrings(string s, int n)
{
	/*
	* Fix start index in outer loop.
	* Reveal new character in inner loop till end of string.
	* Print till-now-formed string.
	*/
	for (int i = 0; i < n; i++)
	{
		string temp;
		int tempindex = 0;
		for (int j = i; j < n; j++)
		{
			temp[tempindex++] = s[j];
			temp[tempindex] = '\0';
			for(int k=0;temp[k]!='\0';k++) cout<<temp[k];
			cout<<endl;
		}
	}
}

// Driver program to test above function
int main()
{
	string s = "Geeky";
	printAllSubstrings(s, s.length());
	return 0;
}
