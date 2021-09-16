#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto&it:v) cin >> it;
    int ans = 0;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(v[i]%2==0)ans+=v[i];
        }
        else
        {
            if(v[i]%2==1)ans-=v[i];
        }
    }
    if(ans>0)cout<<"Alice"<<endl;
    else if(ans<0)cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}