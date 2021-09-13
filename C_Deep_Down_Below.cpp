#include<bits/stdc++.h>
using namespace std;
#define int long long
static bool cmp(pair<int,int>A,pair<int,int>B)
{
   if(A.first!=B.first)return A.first<B.first;
   else return A.second > B.second;
}
void solve()
{
    vector<vector<int>>v;
    int n;
    cin >> n;
    while(n--)
    {
        int k; cin >> k;
        vector<int>temp(k);
        for(auto&it:temp)cin >> it;
        v.push_back(temp);
    }
    vector<pair<int,int>>P;
    for(int i=0;i<v.size();i++)
    {
        int power = 0;
        for(int j=v[i].size()-1;j>=0;j--)
        power = max(power-1,v[i][j]+1);
        P.push_back({power,v[i].size()});
    }
    sort(P.begin(),P.end());
    int count = P[0].first;
    int ans = count;
    for(int i=1;i<P.size();i++)
    {
       count+=P[i-1].second;
       ans+=max(P[i].first-count,0ll);
       count+= max(P[i].first-count,0ll);
    }
    cout<<ans<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}