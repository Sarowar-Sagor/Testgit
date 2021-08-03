#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    int t,a,b,l,r,i,j,n,c,d,e;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d%d",&n,&b);
        vector<int>v;
        for(i=0;i<n;i++){
            scanf("%d",&a);
            v.push_back(a);
        }
        printf("Case %d:\n",j);
        while(b--){
            scanf("%d%d",&l,&r);
            a=lower_bound(v.begin(),v.end(),l)-v.begin();
            c=upper_bound(v.begin(),v.end(),r)-v.begin();
            printf("%d\n",c-a);
        }
    }
    return 0;
}
