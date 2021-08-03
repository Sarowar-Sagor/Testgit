/**In The Name Of Allah*/

#include<bits/stdc++.h>
#include<numeric>

using namespace std;
#define pri(n)          printf("%d\n",n)
#define prll(n)         printf("%lld\n",n)
#define prd(n)          printf("%lf\n",n)
#define scll(n)         scanf("%lld",&n)
#define sci(n)          scanf("%d",&n)
#define scd(n)          scanf("%lf",&n)
#define pi              acos(-1)//inbuilt M_PI
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";


int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll i,a,b,len,j,k,index,index2,l,r,d,n,t,minn,flag=0,cnt,odd;
    char st[10009];
    while(scanf(" %[^\n]",st)!=EOF){
        for(i=0;st[i]!='\0';i++){
            if(flag==0){
                flag=1;
                printf("%c",st[i]);
            }
            else if(st[i]>='A' && st[i]<='Z') printf("%c",st[i]-'A'+'a');
            else if(st[i]=='.' || st[i]=='?' || st[i]=='!'){
                printf("%c",st[i]);
                flag=0;
                for(j=i+1;st[j]!='\0';j++){
                    if(st[j]>='A' && st[j]<='Z'){
                        printf("%c",st[j]);
                        i=j;
                        flag=1;
                        break;
                    }
                    else if(st[j]=='\n') printf("\n");
                    else printf("%c",st[j]);
                }
            }
            else if(st[i]=='\n') printf("\n");
            else printf("%c",st[i]);
        }
    }

    return 0;
}
