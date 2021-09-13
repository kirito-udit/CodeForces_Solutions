#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int>miner;
    vector<int>mine;
    for(int i=0;i<2*n;i++)
    {
        int x,y;
        cin >> x >> y;
        if(!x)miner.push_back(abs(y));
        else mine.push_back(abs(x));
    }
    sort(mine.begin(),mine.end());
    sort(miner.begin(),miner.end(),greater<int>());
    long double ans = 0.0;
    long double ans2=0.0;
    for(int i=0;i<n;i++)
    {
        ans+=sqrt((mine[i]*mine[i])+(miner[i]*miner[i]));
        ans2+=sqrt((mine[i]*mine[i])+(miner[n-i-1]*miner[n-i-1]));
    }
    cout<<setprecision(16)<<min(ans,ans2)<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}