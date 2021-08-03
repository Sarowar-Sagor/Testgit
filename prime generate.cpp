#include <bits/stdc++.h>
using namespace std;
#define LIMIT 100 /**upto 10^8*/
bool mark[100000003];
int prime[1000009];

void SieveOfEratosthenes()
{
    int root=sqrt(LIMIT);
    int cnt=0;
    mark[0]=mark[1]=true;
	for(int i=4;i<=LIMIT;i+=2) mark[i]=true;
	prime[0]=2;
	for (int p=3; p<=LIMIT; p+=2)
	{
		if (mark[p] == false)
		{
		    prime[++cnt]=p;
		    if(p<=root){
                for (int i=p*p; i<=LIMIT; i += (p+p))
				mark[i] = true;
		    }

		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	SieveOfEratosthenes();
	for(int i=0;i<20;i++) cout<<prime[i]<<endl;
	return 0;
}
