#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int>v;
    int p;
    for(int i=0;i<n;i++){cin >> p; v.push_back(p);}
    int pos[n] = {0};
    int neg[n] = {0};
    int res=0;
    int count=INT_MAX;
    if(v[0]>=0)pos[0]++;
    for(int i=1;i<n;i++)
    {
        pos[i]=pos[i-1] + (v[i]>=0);
    }
    neg[n-1]+=(v[n-1]<=0);
    for(int i=n-2;i>=0;i--)neg[i]+=(neg[i+1]+(v[i]<=0));
    for(int i=0;i<n-1;i++)
    {
        int l = i!=0?pos[i-1]:0;
        int r = i!=n-1?neg[i+1]:0;
        count = min(count,l+r+(v[i]>=0));
    }
    cout<<res+count;
    return 0;
}