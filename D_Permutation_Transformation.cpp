#include<bits/stdc++.h>
using namespace std;
#define int long long
void fill(vector<int>&v,vector<int>&ans,int l,int r,int h)
{
    if(l<0 or r>=v.size() or l>r)return;
    else{
    int temp=-1;
    int idx=0;
    for(int i=l;i<=r;i++)
    {
        if(temp<v[i])
        {
            temp=v[i];
            idx=i;
        }
    }
    ans[temp-1]=h;
    int k = h+1;
    fill(v,ans,l,idx-1,k);
    fill(v,ans,idx+1,r,k);
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto&it:v)
    cin >> it;
    vector<int>ans(n);
    int h=0;
    fill(v,ans,0,n-1,h);
    for(int i=0;i<n;i++)
    cout<<ans[v[i]-1]<<" ";
    cout<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}