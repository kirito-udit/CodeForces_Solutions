#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int p; cin >> p;
        v[i] = {p,i};
    }
    sort(v.begin(),v.end());
    vector<int>ans;
    // ans.push_back(v[n-1].second+1);
    int sum=0;
    for(int i=0;i<n;i++)sum+=v[i].first;
    int counter=1;
    for(int i=n-2;i>=0;i--)
    {
        sum-=v[i+1].first;
        if(sum<v[i+1].first)break;
        counter++;
    }
    int i=n;
  for(int i=n-1;i>=n-counter;i--)
  ans.push_back(v[i].second+1);
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
    
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}