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

    double ar[1000006];

    int main()
    {
        /*ios_base::sync_with_stdio(false);
        cin.tie(NULL);/**Dont't use scanf of printf*/
        int x1,x2,y1,y2,x3,y3,diff;
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2){
            diff=abs(x1-x2);
            y1+=diff;
            y2+=diff;
            if(y1<=1000 && y2<=1000){
                cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
            }
            else{
                cout<<x1<<" "<<y1-diff<<" "<<x2<<" "<<y2-diff;
            }
        }
        else if(x1==x2){
            diff=abs(y1-y2);
            x1+=diff;
            x2+=diff;
            if(x1<=1000 && x2<=1000){
                cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
            }
            else{
                cout<<x1-diff<<" "<<y1<<" "<<x2-diff<<" "<<y2;
            }
        }
        else{
            x3=x1;
            y3=y2;
            if(((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))==((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))){
                cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
            }
            else{
                cout<<"-1\n";
            }

        }
        return 0;
    }
