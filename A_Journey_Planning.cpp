#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto&it:v)cin >> it;
    if(n==1)cout<<v[0]<<endl;
    else
    {
        unordered_map<int,int>M;
        for(int i=0;i<n;i++)
        {
            M[i-v[i]]+=v[i];
        }
        int ans=0;
        for(auto it:M)
        {
            ans = max(ans,it.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}
