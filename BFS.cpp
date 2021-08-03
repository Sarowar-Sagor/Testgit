/**Author:Sagor*/

#include<bits/stdc++.h>

using namespace std;

#define pi              acos(-1)
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007

//vector<int>v;
bool vis[10009];
int u,len,v,m,level[10009],b;
int bfs(vector<int>adj[10009],int src,int n)
{
    queue<int>q;
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    q.push(src);
    level[src]=0;
  //  int minn=INT_MAX;
    vis[src]=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        len=adj[u].size();
        for(v=0; v<len; v++)
        {
            b=adj[u][v];
            if(!vis[b])
            {
                vis[b]=1;
                q.push(b);
                level[b]=level[u]+1;
                if(b==n)
                {
                    return level[b];
                }

            }


        }
    }
//    return minn;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    int i,j,t,x,y,len,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>adj[10009];
        while(m--)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int result=bfs(adj,1,n);
        cout<<result<<endl;
    }


    return 0;
}
