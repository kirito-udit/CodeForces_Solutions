#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    unordered_map<int,int>M;
    for(int i=0;i<n;i++)
    {
        int p; cin >> p; p%=m;
        M[p]++;
    }
    int ans = 0;
    if(M[0])ans++;
    for(int i=1;i<m;i++)
    {
        if(M[i])
        {
           int t = abs(M[i]-M[m-i]);
           if(t<=1)ans++;
           else ans+=t;
            M[m-i]=0;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}