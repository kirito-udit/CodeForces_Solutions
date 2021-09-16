#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        int i, n, k; string a, b;
        cin >> n >> k >> a >> b;
       int v1[27] = {0};
       int v2[27] = {0};
       for(auto it:a) v1[it-'a']++;
       for(auto it:b)v2[it-'a']++;
       for(int i=0;i<26;i++)
       {
           if(v1[i]<v2[i] or (v1[i]-=v2[i])%k)
           {
               cout<<"No"<<endl; return;
           }
           v1[i+1]+=v1[i];
       }
       cout<<"Yes"<<endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}