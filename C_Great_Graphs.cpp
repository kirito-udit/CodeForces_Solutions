#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto&it:v) cin >> it;
    sort(v.begin(),v.end());
    int sum = v[n-1];
    int neg[n];
    neg[0]=0;
    for(int i=1;i<n;i++)
    {
        neg[i] = neg[i-1] + i*(v[i]-v[i-1]);
        sum-=neg[i];
    }
    cout<<sum<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    solve();    
    return 0;
}