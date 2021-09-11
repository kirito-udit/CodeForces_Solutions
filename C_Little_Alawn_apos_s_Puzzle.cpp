#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
const int mod = 1e9+7;
void dfs( unordered_map<int,vector<int>>&m,vector<bool>&vis,int i)
{
    if(vis[i]==0)
    {
        vis[i]=1;
        for(auto it:m[i])
        {
            if(vis[it]==0)
            dfs(m,vis,it);
        }
    }
}
int binexp(int a,int b)
{
    if(b==0)return 1;
    if(b%2==0)
    return ((binexp(a,b/2)%mod)*(binexp(a,b/2)%mod)%mod);
    else 
    return ((a%mod)*(binexp(a,b/2)%mod)*(binexp(a,b/2)%mod)%mod);
}
void solve()
{
    unordered_map<int,vector<int>>m;
    int n;
    cin >> n;
    vector<int>v(n),v2(n);
    for(auto&it:v)cin>>it;
    for(auto&it:v2)cin>>it;
    for(int i = 0;i<n;i++)
    {
        m[v[i]].push_back(v2[i]);
        m[v2[i]].push_back(v[i]);
    }
    int count = 0;
    vector<bool>vis(n+1,0);
    for(int i = 1; i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(m,vis,i);
            count++;
            count%=mod;
        }
    }
    count%=mod;
    cout<<(binexp(2,count))%mod<<endl;

}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}