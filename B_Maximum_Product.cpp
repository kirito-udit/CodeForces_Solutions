#include<bits/stdc++.h>
using namespace std;
#define int long long
static bool cmp(int a,int b)
{
    return abs(a)>abs(b);
}
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto&it:v)cin >> it;
    sort(v.begin(),v.end(),cmp);
    int ans = v[0]*v[1]*v[2]*v[3]*v[4];
    if(*max_element(v.begin(),v.end())<0)
    {
    cout<<v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]<<endl;
    return;
    }
    for(int i=5;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            int temp = v[i];
            for(int k=0;k<5;k++)
            {
                if(j!=k)
                {
                    temp*=v[k];
                }
            }
            ans = max(ans,temp);
        }
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