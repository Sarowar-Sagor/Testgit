#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=6){
        cout<<"-1\n";
    }
    else if(n<=17){
        cout<<"6"<<" "<<"3"<<endl;
    }
    else if(n<=49){
        cout<<"10"<<" "<<"5"<<endl;
    }
    else{
        cout<<"30"<<" "<<"5"<<endl;

    }
    return 0;
	
}
