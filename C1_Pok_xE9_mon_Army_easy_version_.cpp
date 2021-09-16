#include<bits/stdc++.h>
using namespace std;
#define int long long
int N;
int cache[300002][2];
int dp(vector<int>&v,int idx,int par)
{
    if(idx==N)return 0;
    if(cache[idx][par]!=-1)return cache[idx][par];
    if(par==0)
    {
        cache[idx][0]=max(dp(v,idx+1,1)+v[idx],dp(v,idx+1,0));
    }
    else
    {
        cache[idx][1]= max(dp(v,idx+1,0)-v[idx],dp(v,idx+1,1));
    }
    return cache[idx][par];
}
void solve()
{
    int n,q;
    cin >> n>>q;
    N=n;
    memset(cache,-1,sizeof(cache));
    vector<int>v(n);
    for(auto&it:v)cin >> it;
    cout<<dp(v,0,0)<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}