/**<<<<<<In the name of ALLAH>>>>>>>

<<<<It's never too late for a new beginning in your life>>>>
Today is hard
    tomorrow will worse
        but the day after tomorrow will be the sunshine..
HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD............
Never give up**/

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
#define nl              cout<<"\n"
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n"
#define eps             0.000000001
/**template<class x> void summation(x &a,x &b)*/

/** for print with quote \"hello world\"
    1LL is used to convert into long long*/

bool isprime(ll n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;

}
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}

vector<int>v;
int ar[10000000],i,n;


int main()
{
    /**freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/


    return 0;
}
